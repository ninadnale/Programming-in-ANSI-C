#include<stdio.h>

void month(int m);

void main()
{
	int m;
	
	printf("Enter month number :");
	scanf("%d",&m);
	
	month(m);
	
}

void month(int m)
{
	char month[14][15] = {"Invalid","January","February","March","April","May","June","July","August","September","October","November","December"};
	
	printf("%s\n",month[m]);
	
}
