#include<stdio.h>

void main()
{
	float rice,sugar;
	
	printf("Enter price of Rice : ");
	scanf("%f",&rice);
	
	printf("Enter price of Sugar : ");
	scanf("%f",&sugar);
	
	printf("\n***LIST OF ITEMS***\nItem\tPrice\nRice\t%4.2f\nSugar\t%4.2f\n",rice,sugar);
	
}
