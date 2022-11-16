#include<stdio.h>

void main()
{
	int a,c;
	float b,d;
	
	printf("Enter code of Fan :");
	scanf("%d",&a);
	printf("Enter price of Fan :");
	scanf("%f",&b);
	
	printf("\nEnter code of Motor :");
	scanf("%d",&c);
	printf("Enter price of Motor :");
	scanf("%f",&d);
	
	
	printf("\n\nName \t Code \t Price \nFan \t %-d \t %.2f \nMotor \t %-d \t %.2f\n",a,b,c,d);
}
