#include<stdio.h>

struct structure
{
	int a;
	char b[10];
	float c;
};

void main()
{
	struct structure s1;
	
	printf("Size of structure -> %d\n",sizeof(s1));
	
}

//size of structure depends upon padding.
//padding depends upon size of largest data-type in structure.
//Size of each quantity is reserved depending upon padding size.
