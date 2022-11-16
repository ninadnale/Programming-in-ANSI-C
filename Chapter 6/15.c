#include<stdio.h>
#include<math.h>

void main()
{
	double X;
	char ch;
	
	printf("\n\t 1. sin(X) --> S or s \n\t 2. cos(X) --> c or C \n\t 3. tan(X) --> t or T \nEnter your choice : ");
	scanf("%c",&ch);
	
	printf("Enter value of X : ");
	scanf("%lf",&X);
	
	/*-------------------------------------
	if(ch=='s' || ch=='S')
	{
		printf("sin(%.2lf) = %.2f\n",X,sin(X));
	}
	else if(ch=='c' || ch=='C')
	{
		printf("cos(%.2lf) = %.2f\n",X,cos(X));
	}
	else if(ch=='t' || ch=='T')
	{
		printf("tan(%.2lf) = %.2f\n",X,tan(X));
	}
	-------------------------------------*/
	
	
	/*-------------------------------------*/
	switch(ch)
	{
		case 's':
		case 'S':
			printf("sin(%.2lf) = %.2f\n",X,sin(X));
			break;
		
		case 'c':
		case 'C':
			printf("cos(%.2lf) = %.2f\n",X,cos(X));
			break;
		
		case 't':
		case 'T':
			printf("tan(%.2lf) = %.2f\n",X,tan(X));
			break;
	}
	/*-------------------------------------*/
	
}
