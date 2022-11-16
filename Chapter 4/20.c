#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Input 3 sides of Triangle : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b || b==c || a==c)
	{
		printf("\nTriangle is ISOSCELES \n\n");
	}
	else
		printf("\nTriangle is Not Isosceles \n\n");
}
