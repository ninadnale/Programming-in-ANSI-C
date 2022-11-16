#include<stdio.h>

void main()
{
	int a;
	
	printf("Enter any number : ");
	scanf("%d",&a);
	
	printf("Reversed number is : ");
	while(a>0)
	{
		printf("%d",a%10);
		a=a/10;
	}
	printf("\n");
}
