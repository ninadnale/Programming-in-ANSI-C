#include<stdio.h>

void main()
{
	float mc,hl,total;
	int ch;
	
	printf("Enter the cost of Mill Cloth : ");
	scanf("%f",&mc);
	
	printf("Enter the cost of Handloom Items : ");
	scanf("%f",&hl);
	
	total = mc+hl;
	
	if(total<=100)
		ch = 1;
	else if(total<=200)
		ch = 2;
	else if(total<=300)
		ch = 3;
	else
		ch = 4;
		
	switch(ch)
	{
		case 1:
			hl = hl*0.95;
			break;
		case 2:
			mc = mc*0.95;
			hl = hl*0.925;
			break;
		case 3:
			mc = mc*0.925;
			hl = hl*0.90;
			break;
		case 4:
			mc = mc*0.90;
			hl = hl*0.85;
			break;
		default:
			printf("Invalid Choice !!!\n");
	}
	
	total = mc+hl;
	printf("\nTotal amount to be paid by Customer : %.2f \n",total);
}
