#include<stdio.h>

struct structure
{
	char x; 	//4
	int a; 		//4
	char b[10]; //12
	float c;	//4
};

union un
{
	char x;
	int a;
	char b[10]; //12
	float c;
};

void main()
{
	struct structure s1;
	union un u1;
	
	printf("Size of structure -> %d \n",sizeof(s1));
	printf("Size of union -> %d \n",sizeof(u1));
	
}
