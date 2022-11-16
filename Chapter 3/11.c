#include<stdio.h>

void main()
{
	float dist,fuel;
	
	printf("Enter distance travelled by car (in km) : ");
	scanf("%f",&dist);
	
	printf("Enter Fuel consumed (in lit) : ");
	scanf("%f",&fuel);
	
	printf("\nThe mileage of the car is : %.2f kmpl\n",dist/fuel);
	
}
