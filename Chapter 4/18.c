#include<stdio.h>

void main()
{
	int a,b,c;
	float x;
	
	printf("Enter values of a, b & c : ");
	scanf("%d%d%d",&a,&b,&c);
	
	x = a-(b/3)+(c*2)-1;
	
	printf("\nValue of given expression is : %f\n",x);
	
}
