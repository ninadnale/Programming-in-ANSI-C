#include<stdio.h>

void input(int a[][10], int b[][10], int n);
void add(int a[][10], int b[][10], int c[][10], int n);

void main()
{
	int a[10][10],b[10][10],c[10][10];
	int n;
	
	printf("Enter the size of matrices");
	scanf("%d",&n);
	
	input(a,b,n);
	add(a,b,c,n);
	
	printf("\nAddition is : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

}

void input(int a[][10], int b[][10], int n)
{
	printf("\nEnter elements of 1st matrix row-wise : ");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	printf("Enter elements of 2nd matrix row-wise : ");
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&b[i][j]);
}

void add(int (*a)[10], int b[][10], int c[][10], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j] = *((*a)+j) + b[i][j];
		}
		*a++;
	}
}
