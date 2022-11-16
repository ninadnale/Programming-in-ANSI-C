#include<stdio.h>

void main()
{
	int amount, den[10];
	int curr[] = {2000,500,200,100,50,20,10,5,2,1};
	
	printf("Enter amount -> ");
	scanf("%d",&amount);
	
	int i=0;
	while(amount>0)
	{
		den[i] = amount/curr[i];
		amount = amount%curr[i];
		i++;
	}
	
	printf("\n***Currency Denomination***\n");
	printf("---------------------------\n");
	for(int j=0;j<i;j++)
		printf("\n\t%4d -> %2d",curr[j],den[j]);
	printf("\n");
}
