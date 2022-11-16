#include<stdio.h>

void main()
{
	int n;
	
	printf("Enter size of array -> ");
	scanf("%d",&n);
	
	int a[n][n];
	printf("\nEnter elements of A row-wise : ");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	
	int b[n][n];
	
	printf("Enter elements of B row-wise : ");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	
	int sum[n][n],product[n][n];
	// A + B
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			sum[i][j] = a[i][j] + b[i][j];
	
	//DISPLAY
	printf("\nSUM : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",sum[i][j]);
		printf("\n");
	}
	
	//MULTIPLICATION
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			product[i][j] = 0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
				product[i][j] += a[i][k] * b[k][j];
		}
	}
	
	printf("\nPRODUCT : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",product[i][j]);
		printf("\n");
	}
}
