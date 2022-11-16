#include<stdio.h>

void row_avg(int a[][10], int m, int n);
void col_avg(int a[][10], int m, int n);

void main()
{
	int m,n;
	int a[10][10],b[10][10];
	
	printf("Enter value of m : ");
	scanf("%d",&m);
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	printf("Enter Elements of matrix row-wise : ");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	row_avg(a,m,n);
	col_avg(a,m,n);
	
}

void row_avg(int a[][10], int m, int n)
{
	int temp[10];
	
	for(int i=0;i<m;i++)
	{
		temp[i]=0;
		for(int j=0;j<n;j++)
		{
			temp[i] += a[i][j];
		}
		temp[i] = temp[i]/n;
	}
	
	printf("Row-wise average is : \n");
	for(int i=0;i<m;i++)
		printf("%d\n",temp[i]);
}

void col_avg(int a[][10], int m, int n)
{
	float temp[10];
	
	for(int i=0;i<n;i++)
	{
		temp[i]=0;
		for(int j=0;j<m;j++)
		{
			temp[i] += a[j][i];
		}
		temp[i] = temp[i]/m;
	}
	
	printf("Column-wise average is : ");
	for(int i=0;i<n;i++)
		printf("%f ",temp[i]);
	
	printf("\n");
}


