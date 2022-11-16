#include<stdio.h>

void main()
{
	int a[10],count=0;
	
	printf("Enter ages of 7 persons : ");
	for(int i=0;i<7;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<7;i++)
	{
		if(a[i]<50||a[i]>60)
			continue;
		count++;
	}
	printf("Count = %d\n",count);
	
}
