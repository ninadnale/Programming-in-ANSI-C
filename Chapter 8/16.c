#include<stdio.h>

void main()
{
	int m,n;
	
	printf("Enter size of first array : ");
	scanf("%d",&m);
	
	int a[m];
	
	printf("Enter elements of first array -> ");
	for(int i=0;i<m;i++)
		scanf("%d",&a[i]);
	
	printf("Enter size of second array : ");
	scanf("%d",&n);
	
	int b[n];
	
	printf("\nEnter elements of second array -> ");
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
	
	if(m<n)
	{
		int c[n];
		for(int i=0;i<m;i++)
			c[i] = a[i] + b[i];
		for(int i=m;i<n;i++)
			c[i] = b[i];
		
		printf("\nADDITION ARRAY -> ");
		for(int i=0;i<n;i++)
			printf("%d ",c[i]);
			
	}
	else
	{
		int c[m];
		for(int i=0;i<n;i++)
			c[i] = a[i] + b[i];
		for(int i=n;i<m;i++)
			c[i] = a[i];
		printf("\n ADDITION ARRAY -> ");
		for(int i=0;i<m;i++)
			printf("%d ",c[i]);
		
	}
	printf("\n");
	
}
