#include<stdio.h>

void main()
{
	int a;
	
	int sum=0;
	for(int i=100;i<201;i++)
	{
		if(i%7==0)
		{
			sum += i;
		}
	}
	
	printf("\nSum is : %d\n",sum);
	
}
