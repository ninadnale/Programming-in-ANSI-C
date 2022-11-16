#include<stdio.h>

void main()
{
	int n;
	float sum=0.0;
	
	printf("Enter value of n : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		sum = sum + (1.0/i);
	}
	
	//sum = 1.0/2.0;
	printf("\nSum of series is = %f\n",sum);
}
