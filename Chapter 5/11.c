#include<stdio.h>

void main()
{
	int code[10] = {111,112,113};
	int quantity[10] = {2,5,3};
	
	printf("Item-Code    Quantity \t Location\n");
	for(int i=0;i<3;i++)
	{
		printf("  %d \t\t %d \t\t  \n",code[i],quantity[i]);
	}
}
