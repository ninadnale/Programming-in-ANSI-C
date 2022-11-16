#include<stdio.h>
#include<math.h>

void main()
{
	float y,x;
	
	printf("  X  | ");
	for(float i=0.1;i<1;i+=0.1)
		printf("%.4f  ",i);
	
	printf("\n");
	printf("------------------------------------------------------------------------------\n");
	for(float z=1.0;z<10;z+=1)
	{
		printf(" %.1f | ",z);
		for(float i=0.1;i<1;i+=0.1)
		{
			x = z+i;
			y = exp(-x);
			printf("%.4f  ",y);
		}
		printf("\n");
	}
	
}
