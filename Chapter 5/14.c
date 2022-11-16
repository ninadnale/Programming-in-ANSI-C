#include<stdio.h>

void main()
{
	int n=5;
	int count=n;
	for(int i=n;i>0;i--)
	{
		for(int x=0;x<(n-count);x++)
			printf("  ");
		
		for(int j=count;j>0;j--)
			printf("%d ",j);
		count--;
		printf("\n");
	}
}
