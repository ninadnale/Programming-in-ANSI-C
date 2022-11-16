#include<stdio.h>
#include<math.h>

int fact(int n);
float fun(float x, int n);
int n=1,lim;

void main()
{
	float x;
	
	printf("Enter x : ");
	scanf("%f",&x);
	
	printf("Enter number of terms : ");
	scanf("%d",&lim);
	
	float a = x + fun(x,n);
	printf("Value of function %f\n",a);
	
}

float fun(float x, int n)
{
	if(n>lim)
	{
		return 0;
	}
	else
	{
		int z = 2*n+1;
		int y = pow(x,z);
		
		float term = (float)y/fact(z);
		
		if(n%2==0)
		{
			n++;
			return (term)+fun(x,n);
		}
		else
		{
			n++;
			return (-term)+fun(x,n);
		}
	}
}

int fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
