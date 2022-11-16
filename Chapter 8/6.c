#include<stdio.h>

void main()
{
	int a[10],b[10],c[20];
	int p,q,r,n,temp;
	
	printf("Enter size of array A : ");
	scanf("%d",&p);
	
	printf("Enter elements : ");
	for(int i=0;i<p;i++)
		scanf("%d",&a[i]);
	
	printf("\nEnter size of array B : ");
	scanf("%d",&q);
	
	printf("Enter elements : ");
	for(int i=0;i<q;i++)
		scanf("%d",&b[i]);
		
	for(int i=0;i<p+q;i++)
	{
		if(i<p)
			c[i] = a[i];
		else
			c[i] = b[i-q];
	}
	
	n=p+q;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(c[i]>c[j])
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	
	printf("\nMerged Array : ");
	for(int i=0;i<n;i++)
		printf("%d ",c[i]);
	printf("\n");
	
}
