#include<stdio.h>

void main()
{
	int a,yrs,weeks,days;
	
	printf("Enter number of days : ");
	scanf("%d",&a);
	
	yrs = a/365;
	a = a%365;
	
	weeks = a/7;
	a = a%7;
	
	days = a;
	
	printf("\nYears = %d\nWeeks = %d\nDays = %d\n",yrs,weeks,days);
	
}
