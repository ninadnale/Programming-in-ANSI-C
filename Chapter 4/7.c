#include<stdio.h>
#include<math.h>

void main()
{
	float dr,sc,hc;
	float EOQ,TBO;
	
	printf("Enter demand rate : ");
	scanf("%f",&dr);
	
	printf("Enter setup costs : ");
	scanf("%f",&sc);
	
	printf("Enter Holding cost : ");
	scanf("%f",&hc);
	
	EOQ = sqrt(2*dr*sc/hc);
	TBO = sqrt(2*sc/(dr*hc));
	
	printf("\nANSWER : \n");
	printf("EOQ = %.2f \nTBO = %.2f\n",EOQ,TBO);
	
}
