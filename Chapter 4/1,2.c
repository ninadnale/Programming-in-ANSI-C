#include<stdio.h>

void main(void)
{
	int a;
	float x;
	
	printf("Enter the number : ");
	scanf("%f",&x);
	
	a = (int) x;
	
	int last1 = a%10;
	
	printf("\nEntered number is : %f",x);
	printf("\n\nThe rightmost digit of integral part of given number is : %d",last1);
	
	int last2 = a%100;
	printf("\nThe two rightmost digits of integral part of given number is : %d\n",last2);
	
	
}
