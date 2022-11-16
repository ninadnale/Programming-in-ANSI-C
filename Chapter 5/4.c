#include<stdio.h>

void main()
{
	float r[4];
	int d[4];
	
	printf("Enter any four number between 1 to 20 : ");
	for(int i=0;i<4;i++)
		scanf("%f",&r[i]);
	
	for(int i=0;i<4;i++)
		d[i] = r[i];
	
	printf("\n------HISTOGRAM------\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<d[i];k++)
			{
				printf("*");
			}
			if(j==1)
				printf("  %.2f",r[i]);
			printf("\n");	
		}
		printf("\n");
	}
	
}
