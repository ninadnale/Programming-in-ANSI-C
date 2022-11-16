//binary search using pointers
#include<stdio.h>
#include<stdlib.h>

void bin_search(int *arr, int n, int key);

void main()
{
	int n,key;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter elements -> ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter key to be searched : ");
	scanf("%d",&key);
	
	bin_search(a,n,key);
	
}

void bin_search(int *arr, int n, int key)
{
	int temp;
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
		{
			if(*(arr+j)>*(arr+j+1))
			{
				temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	
	
	int mid,low=0,high=n-1;
	int flag = 0;
	
	while(low<=high)
	{
		mid = (low+high)/2;
		printf("%d\n",mid);
		if(*(arr+mid)==key)
		{
			flag=1;
			break;
		}
		else if(*(arr+mid)<key)
			low = mid+1;
		else
			high = mid-1;
		
	}
	
	if(flag==0)
		printf("KEY NOT FOUND\n");
	
	else
		printf("KEY IS FOUND\n");
}

