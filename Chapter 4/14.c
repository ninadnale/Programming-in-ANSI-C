#include<stdio.h>
#include<math.h>

void main()
{
	printf("\nX (degrees) \t sin(x) \t cos(x)\n\n");
	
	for(int i=0;i<=180;i+=15)
	{
		float angle = i*3.14/180;
		printf("%8d\t%6.2f\t\t%6.2f\n",i,sin(angle),cos(angle));
	}
}
