#include<stdio.h>

void space(int a);

void main()
{
	int x;
	
	printf("Enter number of spaces : ");
	scanf("%d",&x);
	
	printf("%d",2);
	space(x);
	printf("%d\n",3);
	
}

void space(int a)
{
	for(int i=0;i<a;i++)
		printf(" ");
}
