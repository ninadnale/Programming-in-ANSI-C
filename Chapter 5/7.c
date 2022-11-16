#include<stdio.h>

void main()
{
	int a;
	
	printf("Enter any real number : ");
	scanf("%d",&a);
	
	printf("%03d\n%-03d\n",a,a);
	//printf("\n\n %.2e \n %.4e \n %.8e",a,a,a);
}
