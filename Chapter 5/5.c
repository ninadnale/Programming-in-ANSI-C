#include<stdio.h>

void main()
{
	int a,b;
	
	printf("Enter any two numbers :");
	scanf("%d %d",&a,&b);
	
	int a1=(b%10)*a,a2=(b/10)*a;
	
	printf("%16d",a);
	printf("\n\t *%6d",b);
	printf("\n\t  -------");
	printf("\n%2d * %d is%6d",(b%10),a,a1);
	printf("\n%2d * %d is%6d",(b/10),a,a2);
	printf("\n\t  -------");
	printf("\n%16d\n",(a1+a2*10));
}
