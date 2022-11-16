#include<stdio.h>

void main()
{
	float pp,andp;
	int yrs;
	
	printf("Enter purchase price : ");
	scanf("%f",&pp);
	
	printf("Enter number of years of service : ");
	scanf("%d",&yrs);
	
	printf("Enter annual depreciation : ");
	scanf("%f",&andp);
	
	float sv = pp - (andp * yrs) ;
	
	printf("\nSalvage value is : %f \n",sv);
}
