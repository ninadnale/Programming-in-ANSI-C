#include<stdio.h>
#include<math.h>

void main()
{
	float L,R;
	float freq;
	
	printf("Enter Inductance (L) : ");
	scanf("%f",&L);
	
	printf("Enter Resistence (R) : ");
	scanf("%f",&R);
	
	printf("\nFREQUENCY TABLE : \n");
	for(float C=0.01 ; C<=0.1 ; C+=0.01)
	{
		freq = sqrt((1/(L*C))-(R*R/(4*C*C)));
		printf("%f \n",freq);
	}
	
}
