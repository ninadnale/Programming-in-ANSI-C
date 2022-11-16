#include<stdio.h>

void insert(int a[], int n, int x);

void main()
{
	int a[10],n,x;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	printf("Enter elements of array : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter element to be inserted : ");
	scanf("%d",&x);
	
	insert(a,n,x);
	
	for(int i=0;i<n+1;i++)
		printf("%d ",a[i]);
	
	printf("\n");
	
}

void insert(int a[], int len,int x)
{
	int i = len-1;
	
	while(a[i]>x && i>=0)
	{
		a[i+1] = a[i];
		i--;
	}
	
	a[i+1] = x;
	
}
