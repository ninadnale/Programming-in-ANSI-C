#include<stdio.h>

void main()
{
	int a,b,x,y;
	
	printf("Enter values of x & y : ");
	scanf("%d %d",&x,&y);
	
	a = x+y;
	b = x-y;
	
	printf("\nThe required results are : %d %d %d \n",a/b,a/2,a*b);
}
