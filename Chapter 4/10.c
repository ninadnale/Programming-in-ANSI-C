#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b&&a>c)
		printf("\nLargest number = %d\n",a);
	if(b>a&&b>c)
		printf("\nLargest number = %d\n",b);
	if(c>b&&c>a)
		printf("\nLargest number = %d\n",c);		
}
