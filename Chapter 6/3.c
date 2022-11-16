#include<stdio.h>

void main()
{
	int a,b,c,d,m,n;
	float x1,x2;
	
	printf("Enter values of a, b, c & d : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	printf("Enter values of m & n : ");
	scanf("%d%d",&m,&n);
	
	float den = (a*d) - (c*b);
	
	if(den==0)
		printf("Denominator is equal to zero !!!\n");
	else
	{
		x1 = (m*d - b*n)/den;
		x2 = (n*a - m*c)/den;
		
		printf("\nSolution : \n\tX1 = %.2f \n\tX2 = %.2f\n",x1,x2); 
	}
	
}
