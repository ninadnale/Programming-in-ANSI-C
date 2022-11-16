#include<stdio.h>
#include<math.h>

void main()
{
	float x;
	
	printf("\n---------SQUARE ROOT TABLE---------\n");
	printf("\nNumber");
	for(float j=0.1;j<1.0;j=j+0.1)
	{
		printf(" %5.2f",j);
	}
	printf("\n");
	for(float y=1.0;y<10.0;y=y+1.0)
	{
		printf("  %4.2f",y);
		for(x=0.1;x<1.0;x=x+0.1)
		{
			float a = x+y;
			printf("  %4.2f",sqrt(a));
		}
		printf("\n");
	}
	
}
