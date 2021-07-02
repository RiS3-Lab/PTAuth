//
// Created by Reza Mirzazade on 12/30/20.
//

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>
#include "config.h"


FILE *file=NULL;
uint64_t arrayStartAddress[100]={0};
uint64_t arrayEndAddress[100]={0};
uint64_t arrayAddress[100]={0};
uint64_t address_start=0;
uint64_t address_end=0;

int arrayAddressLength = 0;
int initialized_address=0;
int readonly=0;
int globalVar=0;
char filename[30]={};
int cnt=0;

// This function can be used to check during the runtime whether the pointer points to the heap or not
void checkPointstoHeap() {

    sprintf(filename, "/proc/%d/maps", getpid());
    file = fopen(filename,"r");
    char line [512];
    char previousLine [512];
    char *heap="heap";
    char *stack="stack";
    int heapfound=0;

    while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
    {
        printf("Lineeee is = %s \n",line);
        char *Token;
        char *ptr;
        if(strstr(line,heap)  != NULL) {
            //printf("previousLine is = %s \n",previousLine);

            Token = strtok (line,"-");
            address_start = strtoul(Token, &ptr, 16);
            Token = strtok (NULL, " ");
            address_end = strtoul(Token, &ptr, 16);
            Token = strtok (NULL, " ");

            arrayAddress[cnt]=address_start;
            cnt++;
            arrayAddress[cnt]=address_end;
            cnt++;
            heapfound=1;
            continue;
        }
        if (heapfound){
            Token = strtok (line,"-");
            address_start = strtoul(Token, &ptr, 16);
            Token = strtok (NULL, " ");
            address_end = strtoul(Token, &ptr, 16);
            Token = strtok (NULL, " ");

            arrayAddress[cnt]=address_start;
            cnt++;
            arrayAddress[cnt]=address_end;
            cnt++;
            heapfound=0;
        }
        strncpy(previousLine, line, 512);
    }

    for(int loop = 0; loop < cnt; loop++)
        printf("%llx\n ", arrayAddress[loop]);
    fclose ( file );
}
