#include<stdio.h>

void main()
{
	int a,b;
	
	printf("Enter a & b :");
	scanf("%d%d",&a,&b);
	
	if(a>b)
		printf("a is greater than b\n");
	else if(a<b)
		printf("b is greater than a\n");
	else
		printf("a and b are equal\n");
}
