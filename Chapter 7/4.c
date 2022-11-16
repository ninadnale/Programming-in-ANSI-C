#include<stdio.h>
#include<math.h>

void main()
{
	int n,p;
	float r,v;
	
	printf("\n   n  --->  V  \n\n");
	for(p=1000,r=0.10,n=1 ; n<=10 ; p+=1000,r+=0.01,n++)
	{
		v = p*(1+r);
		p = v;
		printf(" %3d \t %3.2f \n",n,v);
	}
	
}
