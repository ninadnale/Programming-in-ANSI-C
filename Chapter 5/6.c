#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter any 3 integers : ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("\nUsing 3 printfs : \n");
	printf("a = %d ",a);
	printf("b = %d ",b);
	printf("c = %d ",c);
	
	printf("\nWith conversion specifiers : \n");
	printf("a = %d b = %d c = %d",a,b,c);
	
	
	
}
