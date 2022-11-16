#include<stdio.h>
#include<stdlib.h> // for exit(0)

int isprime(int num);

void main()
{
	int num;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("The Number is neither Prime nor Composite\n");
		exit(0);
	}	
	
	int a = isprime(num);
	
	if(a==1)
		printf("The Number is PRIME !\n");
	else
		printf("The number is NOT Prime !!!\n");
}

int isprime(int a)
{
	int i = a-1;
	while(i>1)
	{
		if(a%i==0)
			return 0;
		i--;
	}
	return 1;
	
}
