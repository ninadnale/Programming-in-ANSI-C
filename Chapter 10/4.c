#include<stdio.h>

float fun(int a[50],int n,int x);

void main()
{
	int a[50],n,x;
	float P;
	
	printf("Enter value of 'n'(degree of polynomial) : ");
	scanf("%d",&n);
	
	printf("Enter value of 'x' : ");
	scanf("%d",&x);
	
	printf("Enter values in array :");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	P = fun(a,n,x);
	
	printf("Value of given polynomial is : %.3f\n",P);
	
}

float fun(int a[50],int n,int x)
{
	int term,P;
	term = (a[0]*x) + a[1];
	for(int i=2;i<n;i++)
	{
		term = (term*x)+a[i];
	}
	
	return term;
	
}
