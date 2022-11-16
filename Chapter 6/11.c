#include<stdio.h>

void main()
{
	int a,b,c;
	int largest,side1,side2;
	
	printf("Enter 3 sides of Triangle : ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>c && b>c)
	{
		largest = c;
		side1 = a;
		side2 = b;
	}
	else if(b>c && b>a)
	{
		largest = b;
		side1 = a;
		side2 = c;
	}
	else
	{
		largest = c;
		side1 = a;
		side2 = b;
	}
	
	if(largest*largest == side1*side1 + side2*side2)
		printf("\nThese are sides of Right-angled Triangle\n");
	else
		printf("\nThese are not sides of Right-angled Triangle\n");
	
}
