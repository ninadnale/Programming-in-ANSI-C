#include<stdio.h>
//PASCAL's Triangle
void main()
{
	int num;
	int p[11][11];
	
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i==1||j==i||j==1)
			{
				p[i][j] = 1;
				printf("%2d  ",p[i][j]);
			}
			else
			{
				p[i][j] = p[i-1][j-1] + p[i-1][j];
				printf("%2d  ",p[i][j]);
			}
			/*
			if(i==1||j==i||j==1)
				printf("%3d ",1);
			else
				printf("%3d ",0);*/
		}
		printf("\n");
	}
}
