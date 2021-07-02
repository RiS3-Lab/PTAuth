#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

struct person
{
	char* name;  
	unsigned int age;  
	unsigned long ID;  
};  

void set_info(struct person *p, unsigned int age, unsigned long ID) {
	p->age = age; 
	p->ID= ID;
}

void print_person(struct person *p){
	printf("Person ID is = %ld \n", p->ID);
	printf("Person age is = %d \n", p->age);
	free(p);
}

void use_after_free(){
	struct person *p = (struct person*) malloc(sizeof(struct person));

	set_info(p, 25,50);
	print_person(p);

	printf("Dereferencing p dangling pointer. PTAuth should terminate the program at this point.\n");
	int ID = p->ID; // Use-After-Free -- That is discovered by PTAuth. 
}

void double_free(){

	struct person *p = (struct person*) malloc(sizeof(struct person));

	set_info(p, 25,50);
	print_person(p);

	printf("Free a freed pointer. PTAuth should terminate the program at this point.\n");
	free(p); // Double-Free -- That is discovered by PTAuth.

}

void invalid_free(){

	struct person *p = (struct person*) malloc(sizeof(struct person));

	set_info(p, 25,50);
	p = p + 1;

	printf("Invalid free of a pointer. PTAuth should terminate the program at this point.\n");
	free(p); // Invalid-Free -- That is discovered by PTAuth.

}

void print_usage(){
	printf("Usage: ./stest.arm.elf [OPTIONS]\n");
	printf("./stest.arm.elf uaf     Trigger the Use-After-Free bug\n");
	printf("./stest.arm.elf df      Trigger the Double-Free bug\n");
	printf("./stest.arm.elf if      Trigger the Invalid-Free bug\n");
	exit(0);
}

int main (int argc, char *argv[])
{

	if(argc < 2) {
		print_usage();
	}

	if (strcmp (argv[1], "uaf") == 0) {
		use_after_free();
	}

	if (strcmp (argv[1], "df") == 0) {
		double_free();
	}

	if (strcmp (argv[1], "if") == 0) {
		invalid_free();
	}

	else {
		print_usage();
	}

	return 0;
}


