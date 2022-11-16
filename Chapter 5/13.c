#include<stdio.h>

void main()
{
	float a;
	
	printf("Enter amount (in Dollars) : ");
	scanf("%f",&a);
	
	printf("\nEquivalent amount (in Euros) : %.2f",0.89*a);
	printf("\nEquivalent amount (in INR) : %.2f\n",68.65*a);
	
}
