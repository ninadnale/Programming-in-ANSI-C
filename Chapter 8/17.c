#include<stdio.h>

void main()
{
	int n,sum=0,count=0;
	
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter elements of array -> ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
		if(a[i]%2 != 0)
		{
			sum += a[i];
			count++;
		}
	
	
	printf("\nCount of ODD numbers = %d\nSum of all ODD numbers in given array = %d\n",count,sum);
}
