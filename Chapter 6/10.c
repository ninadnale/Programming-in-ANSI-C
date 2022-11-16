#include<stdio.h>
#include<math.h>

void main()
{
	int a,b,c,delta,x1,x2;
	
	printf("Enter values of a, b & c : ");
	scanf("%d %d %d",a,b,c);
	
	delta = (b*b) - (4*a*c);
	
	x1 = -b + sqrt(delta)/2*a;
	x2 = -b - sqrt(delta)/2*a;
	
	if(a==0&&b==0)
		printf("\nNo Solution !!!");
	else if(a==0)
		printf("\nOnly one root x = %f",-c/b);
	else if(delta<0)
		printf("\nNo real roots");
	else if(delta>0 || delta==0)
		printf("\nx1 = %d, x2 = %d\n",x1,x2);
}
