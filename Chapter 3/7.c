#include<stdio.h>

void main()
{
	int a;
	
	printf("Enter any integer : ");
	scanf("%d",&a);
	
	printf("\n	TABLE OF %d \n",a);
	for(int i=1;i<=10;i++)
	{
		printf("%d * %2d = %3d\n",a,i,(a*i));
	}
}
