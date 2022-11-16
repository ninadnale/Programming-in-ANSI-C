#include<stdio.h>

void main()
{
	int a[15],n,temp,key;
	
	printf("Enter number of elements in array : ");
	scanf("%d",&n);
	
	printf("Enter key to be searched in array : ");
	scanf("%d",&key);
	
	printf("Enter elements : ");
	for(int x=0;x<n;x++)
		scanf("%d",&a[x]);
	
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
	}
	
	
	int LOW=0,HIGH=n-1,mid;
	while(LOW<HIGH)
	{
		if((HIGH+LOW)%2==0 || (HIGH+LOW)==1)
			mid = (HIGH+LOW)/2;
		else
			mid = ((HIGH+LOW)/2)+1;
		
		if(key>a[mid])
			LOW = mid;
		else if(key<a[mid])
			HIGH = mid;
		else if(key==a[mid])
		{
			printf("\nKEY IS FOUND !!!\n");
			break;
		}	
	}
	
	if(LOW==HIGH)
		printf("\nNOT FOUND !!!\n");
}
