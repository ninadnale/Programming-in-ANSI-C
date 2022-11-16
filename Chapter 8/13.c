#include<stdio.h>

void main()
{
	int m,n;
	
	printf("Enter number of rows -> ");
	scanf("%d",&m);
	
	printf("Enter number of columns -> ");
	scanf("%d",&n);
	
	int a[m][n];
	
	printf("\nEnter elements row-wise : ");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	printf("\nTranspose : \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",a[j][i]);
		printf("\n");
	}
	
	
}
