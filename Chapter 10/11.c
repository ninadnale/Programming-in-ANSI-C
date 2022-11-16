#include<stdio.h>

int largest(int a[][10], int m, int n);

void main()
{
	int m,n;
	int arr[10][10];
	
	printf("Enter value of m : ");
	scanf("%d",&m);
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	printf("Enter Elements of matrix row-wise : ");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	
	int a = largest(arr,m,n);
	
	printf("Largest Element is : %d\n",a);
	
}

int largest(int a[][10], int m, int n)
{
	int max = 0;
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(a[i][j]>max)
				max = a[i][j];
		}
	
	return max;
}
