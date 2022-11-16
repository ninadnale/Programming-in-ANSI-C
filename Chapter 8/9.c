#include<stdio.h>

void main()
{
	int a[10],n,temp;
	
	printf("Enter number of elements : ");
	scanf("%d",&n);
	
	printf("Enter values of elements : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
		printf("\n%d th list : ",i+1);
		for(int x=0;x<n;x++)
		{
			printf("%d ",a[x]);
		}
	}
	printf("\n");
	
}
