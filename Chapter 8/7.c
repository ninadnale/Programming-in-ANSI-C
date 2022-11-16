#include<stdio.h>

void main()
{
	int a[5][5],b[5][5],c[5][5];
	int n;
	
	printf("Enter size of matrices : ");
	scanf("%d",&n);
	
	printf("\nEnter elements of Matrix A row-wise : ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{	
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter elements of Matrix B row-wise : ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{	
			scanf("%d",&b[i][j]);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{	
			c[i][j]=0;
			for(int k=0;k<n;k++)
				c[i][j] += a[i][k]*b[k][j];
		}
	}
	
	printf("\nMultiplication A*B : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{	
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
