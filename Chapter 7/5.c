#include<stdio.h>

void main()
{
	for(int i=1;i<6;i++)
	{
		for(int j=0;j<i;j++)
			printf("%1d",i);
		printf("\n");
	}
	
	printf("\n\n");
	
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<i;k++)
			printf(" ");
		for(int j=5;j>i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
