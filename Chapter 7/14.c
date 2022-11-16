#include<stdio.h>
#include<math.h>

void main()
{
	int a;
	for(int angle=0;angle<=180;angle+=15)
	{
		a = 20*sin(angle)+0.5;
		if(a>0)
		{
			for(int i=0;i<25;i++)
				printf(" ");
			for(int j=0;j<a;j++)
				printf("*");
		}
		else
		{
			int x = abs(a);
			for(int j=0;j<25-x;j++)
				printf(" ");
			for(int i=0;i<x;i++)
				printf("*");
		}
		printf("\n");
	}
}
