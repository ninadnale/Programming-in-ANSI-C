#include<stdio.h>

float roundup(float a, int d);

void main()
{
	float num;
	int d;
	
	printf("Enter a number : ");
	scanf("%f",&num);
	
	printf("Enter decimal place upto which rounding is to be done : ");
	scanf("%d",&d);
	
	roundup(num,d);
	
}

float roundup(float a, int d)
{
	printf("The rounded up value is : %*.*f \n",10,d,a);
}
