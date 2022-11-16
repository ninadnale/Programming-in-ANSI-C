#include<stdio.h>
#include<math.h>

void main()
{
	double sinx,term,nom;
	long int mf,fac=1;
	int i=3,j=1,x,n;
	
	printf("Enter value of x : ");
	scanf("%d",&x);
	printf("Enter number of terms to be calculated : ");
	scanf("%d",&n);
	
	sinx = x; //set 1st term as x
	
	while(j<n)
	{
		mf = pow(-1,j);
		fac = fac*i*(i-1);
		nom = pow(x,i);
		
		term = nom/fac;
		sinx += (mf*term);
		
		printf("%lf\n",term);
		
		j++;
		i = i+2;
	}
	
	printf("\nsinx = %lf\n",sinx);
}	
