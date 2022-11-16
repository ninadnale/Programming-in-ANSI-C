#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Please enter any 3 values : ");
	scanf("%d%d%d",&a,&b,&c);
	
	float z  = (a+b+c)/3;
	
	printf("\nSum of Values : %d",a+b+c);
	printf("\nAverage of values : %.2f",z);
	
	
	if(a>b)
	{
		if(a>c)
			printf("\nLargest Number is : %d",a);
		else
			printf("\nLargest Number is : %d",c);
	}
	else
	{
		if(b>c)
			printf("\nLargest Number is : %d",b);
		else
			printf("\nLargest Number is : %d",c);
	}
	
	if(a<b)
	{
		if(a<c)
			printf("\nSmallest Number is : %d\n",a);
		else
			printf("\nSmallest Number is : %d\n",c);
	}
	else
	{
		if(b<c)
			printf("\nSmallest Number is : %d\n",b);
		else
			printf("\nSmallest Number is : %d\n",c);
	}
	
}
