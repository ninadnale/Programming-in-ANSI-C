#include<stdio.h>

void main()
{
	float a;
	
	printf("Enter any real number : ");
	scanf("%f",&a);
	
	int x = a; //gives integer for that real number
	
	if(a>0)
	{
		if((a-0.5)<x)
			printf("\nRounded up value is : %d\n",x);
		else
			printf("Rounded up value is : %d\n\n",x+1);
	}
	else
	{
		if((a+0.5)<x)
			printf("\nRounded up value is : %d\n",x-1);
		else
			printf("Rounded up value is : %d\n\n",x);
	}		
}
