#include<stdio.h>

void main()
{
	float term1=1.0,term2,condition,e=1.0,sum=e;
	int n;
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	int i=1;
	while(i<n)
	{
		term2 = e*(1.0/i);
		sum += term2;
		i++;
		//condition = term2 - term1;
		//term1 = term2;
	}
	
	printf("Eulers's number e = %f\n",sum);
	
}
