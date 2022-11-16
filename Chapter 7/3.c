#include<stdio.h>
//Fibonnacci numbers series
void main()
{
	int num1=0,num2=1,n,fib;
	
	printf("Enter limit :");
	scanf("%d",&n);
	
	printf("%d ",1);
	int i=0;
	do
	{
		fib = num1+num2;
		num1 = num2;
		num2 = fib;
		
		printf("%d ",fib);
		i++;
		
	}while(i<n-1);
	printf("\n");
}
