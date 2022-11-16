#include<stdio.h>

void main()
{
	int a[15];
	int sum=0,count=0;
	
	printf("Enter 10 two digit numbers : ");
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
		
	int i=0;
	while(sum<999&&i<10)
	{
		if(a[i]>0)
		{
			sum += a[i];
			count++;
		}
		i++;
	}
	
	printf("Sum is :%d\nNumbers added :%d\n",sum,count);
}
