#include<stdio.h>

float fun(float term, int a[50], int n, int x,int i);

void main()
{
	int a[50],n,x;
	float P,term;
	
	printf("Enter value of 'n'(degree of polynomial) : ");
	scanf("%d",&n);
	
	printf("Enter value of 'x' : ");
	scanf("%d",&x);
	
	printf("Enter values in array :");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	term = (a[0]*x) + a[1];
	P = fun(term,a,n,x,2);
	
	printf("Value of given polynomial is : %.3f\n",P);
	
}

float fun(float term, int a[50], int n, int x, int i)
{
	if(i==n)
		return term;
	else
	{
		term = (term*x) + a[i];
		return fun(term,a,n,x,i+1);
	}
}
