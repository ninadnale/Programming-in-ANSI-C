#include<stdio.h>

int mul(int a,int b,int c)
{
	return a*b*c;
}

void main()
{
	int (*fp)();
	fp = mul;
	printf("Product is -> %d\n",(*fp)(2,3,4));
	
}

