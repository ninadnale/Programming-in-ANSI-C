#include<stdio.h>

void main()
{
	int num1,num2;
	
	printf("Enter any two numbers : ");
	scanf("%d%d",&num1,&num2);
	
	if(num2==0)
		printf("Division is not Possible !!!\n");
	else
		printf("Division of num1/num2 = %.2f \n",(float)num1/num2);
	
}
