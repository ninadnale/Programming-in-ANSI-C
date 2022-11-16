#include<stdio.h>

void main()
{
	int m,n;
	
	printf("Enter number of rows -> ");
	scanf("%d",&m);
	
	printf("Enter number of columns -> ");
	scanf("%d",&n);
	
	int a[m][n];
	printf("\nMATRIX A :\n");
	printf("Enter elements row-wise : ");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	
	int b[m][n];
	
	printf("\nMATRIX B :\n");
	printf("Enter elements row-wise : ");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&b[i][j]);
	
	int c[m][n],d[m][n];
	// A + B
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			c[i][j] = a[i][j] + b[i][j];
	
	// A - B
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			d[i][j] = a[i][j] - b[i][j];
	
	//DISPLAY
	printf("\nA + B : \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	
	printf("\nA - B : \n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("%d ",d[i][j]);
		printf("\n");
	}
	
}
