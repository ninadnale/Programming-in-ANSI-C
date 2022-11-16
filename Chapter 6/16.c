#include<stdio.h>

void main()
{
	int wd;
	
	char week[9][13] = {"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	
	printf("Enter week-day numerically : ");
	scanf("%d",&wd);
	
	printf("The day is : %s \n",week[wd]);
	
}
