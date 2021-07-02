//
// Created by Reza Mirzazade on 12/30/20.
//

#ifndef INSTRUMENT_UTILS_H
#define INSTRUMENT_UTILS_H

void checkPointstoHeap();

extern uint64_t arrayStartAddress[100];
extern uint64_t arrayEndAddress[100];
extern uint64_t arrayAddress[100];
extern uint64_t address_start;
extern uint64_t address_end;

extern int arrayAddressLength;
extern int initialized_address;
extern int readonly;
extern int globalVar;
extern char filename[30];
extern int cnt;

#endif //INSTRUMENT_UTILS_H
