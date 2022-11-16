#include<stdio.h>

int leap(int year);

void main()
{
	int year,check;
	
	printf("Enter year : ");
	scanf("%d",&year);
	
	check = leap(year);
	
	if(check==0)
		printf("It's a Leap year.\n");
	else
		printf("It's NOT a Leap year.\n");
	
}

int leap(int year)
{
	if(year%400==0 || year%4==0)
		return 0;
	else
		return 1;
	
}
