#include<stdio.h>

void main()
{
	float amount,rate;
	int yrs;
	
	printf("Enter amount, years & rate respectively : ");
	scanf("%f%d%f",&amount,&yrs,&rate);
	
	float sum=amount;
	
	for(int i=1;i<yrs+1;i++)
	{
		sum = sum + (sum*rate/100);
	}
	
	printf("\nCumulative return after %d years is : %f\n",yrs,sum);
}
