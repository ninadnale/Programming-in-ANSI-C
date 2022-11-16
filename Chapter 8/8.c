#include<stdio.h>

void main()
{
	int p[6][6]={0};
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i<j)
				p[i][j]=1;
			else if(i>j)
				p[i][j]=-1;
		}
	}
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%2d ",p[i][j]);
		}
		printf("\n");
	}
}
