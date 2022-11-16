#include<stdio.h>

int Fib(int n);

void main()
{
	int lim;
	
	printf("Enter limit : ");
	scanf("%d",&lim);
	
	for(int i=0;i<lim;i++)
	{
		printf("%d ",Fib(i));
	}
	printf("\n");
}

int Fib(int n)
{
	if(n==0)
		return 0;
	if(n==1||n==2)
		return 1;
	else
		return Fib(n-1)+Fib(n-2);
}
