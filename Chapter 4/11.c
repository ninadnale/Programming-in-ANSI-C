#include<stdio.h>

void main()
{
	int m,n;
	
	printf("Enter numbers respectively : ");
	scanf("%d%d",&m,&n);
	
	if(m%n==0)
		printf("\nThe number is divisible !!!\n");
	else
		printf("\nThe number is not divisible !!!\n");	
}
