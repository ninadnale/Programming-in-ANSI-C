#include<stdio.h>

void main()
{
	long int cc;
	int n;
	float bill;
	
	printf("Enter your customer code : ");
	scanf("%ld",&cc);
	
	printf("Enter number of calls made : ");
	scanf("%d",&n);
	
	if(n>100)
		bill = 250 + (n-100)*1.25;
	else
		bill = 250;
	
	printf("\n***BILL RECEIPT***\n");
	printf("\nCustomer Code : %ld\nNumber of calls made : %d \nAmount to be paid : %.2f\n",cc,n,bill);
	
}
