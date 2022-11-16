#include<stdio.h>

void main()
{
	float x[20],y[20],m,c;
	float s1=0,s2=0,s3=0,s4=0;
	int n;
	
	printf("Enter number of points : ");
	scanf("%d",&n);
	
	printf("Enter values of x & y : ");
	for(int i=0;i<n;i++)
		scanf("%f %f",&x[i],&y[i]);
	
	
	for(int i=0;i<n;i++)
	{
		s1 += x[i]*y[i];
		s2 += x[i]*x[i];
		s3 += x[i];
		s4 += y[i];
	}
	
	m = (n*s1 - s3*s4)/(n*s2 - s3*s3);
	c = (s4 - m*s3)/n;
	
	printf("The required value of m is : %f & c is :%f\n",m,c);
	
}
