#include<stdio.h>
#include<math.h>

void main()
{
	int n=1;
	float d,c,pv,sv;
	
	printf("Enter following data :- \n");
	printf("Enter cost : ");
	scanf("%f",&c);
	
	printf("Enter depreciation : ");
	scanf("%f",&d);
	
	printf("Enter scrap value : ");
	scanf("%f",&sv);
	
	pv = c;
	while(pv>=sv)
	{
		pv = c * pow((1-d),n);
		printf("%f\n",pv);
		n++;
	}
	
	printf("\nUseful life of the given product is %d years\n",n-1);
	
}
