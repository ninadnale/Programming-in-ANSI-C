#include<stdio.h>

void main()
{
	int a;
	
	printf("Please enter any number : ");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("NUMBER IS EVEN\n");
	}
	if(a%2!=0)
	{
		printf("NUMBER IS ODD\n");
	}
	
}
