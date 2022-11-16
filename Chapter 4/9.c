#include<stdio.h>
//#define div 1000

void main()
{
	int a,digit;
	int div = 1000;
	
	printf("Enter a 4-digit number : ");
	scanf("%d",&a);
	
	printf("It's digits are : ");
	while(a>0)
	{
		digit = a/div;
		a = a%div;
		div = div/10;
		
		printf("%d , ",digit);
	}
	printf("\n");
	
}
