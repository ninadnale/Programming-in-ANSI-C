#include<stdio.h>

void main()
{
	int a,fc=0,sc=0,tc=0,fail=0;
	
	printf("Enter marks :");
	scanf("%d",&a);
	
	if(a>80)
	{
		printf("First Division\n");
	}
	else if(a>60)
	{
		printf("Second Division\n");
	}
	else if(a>40)
	{
		printf("Third Division\n");
	}
	else
	{
		printf("Fail !!!\n");
	}
	
	
}
