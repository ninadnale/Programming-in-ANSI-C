#include<stdio.h>

void multiply(int a[][10], int b[][10], int c[][10], int m, int n);

void main()
{
	int m,n;
	int a[10][10],b[10][10],c[10][10];
	
	printf("Enter value of m : ");
	scanf("%d",&m);
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	printf("Enter Elements of matrix 1 row-wise : ");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	printf("Enter Elements of matrix 2 row-wise : ");
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&b[i][j]);
	
	multiply(a,b,c,m,n);
	
	printf("\nMultiplication is : \n");
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%2d ",c[i][j]);
		}
		printf("\n");
	}
	
}

void multiply(int a[][10], int b[][10], int c[][10], int m, int n)
{
	
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
		{
			c[i][j]=0;
			for(int k=0;k<n;k++)
			{
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	
}
