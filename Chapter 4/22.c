#include<stdio.h>

void main()
{
	float a,b,c,d;
	
	printf("Enter a, b, c, d :");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	
	printf("(a+b)*(c/d) = %.2f\n",(a+b)*(c/d));
	printf("(a+b)*c/d = %.2f\n",(a+b)*c/d);
	printf("a+(b*c)/d = %.2f\n",a+(b*c)/d);
	
}
