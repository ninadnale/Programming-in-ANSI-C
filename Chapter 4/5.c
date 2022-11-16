#include<stdio.h>

void main()
{
	float num;
	
	printf("Enter a real number : ");
	scanf("%f",&num);
	
	int a,b,check;
	
	check = num;
	printf("check = %d\n",check);
	if((num-0.5)<check)
	{
		a = num;
		b = num+1.0;
	}
	else
	{
		a = num;
		b = num+0.5;
	}
	
	printf("%d %.2f %d\n",a,num,b);
}
