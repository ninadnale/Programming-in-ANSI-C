#include<stdio.h>

void main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf(" S");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i==0||i==4||j==0||j==4)
				printf(" S");
			else
				printf("  ");
		}
		printf("\n");
	}
}
