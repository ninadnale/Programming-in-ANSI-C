#include<stdio.h>

void main()
{
	int time,step;
	float acc,u,temp;
	
	printf("Enter Acceleration : ");
	scanf("%f",&acc);
	
	printf("Enter Initial velocity : ");
	scanf("%f",&u);
	
	printf("Enter step : ");
	scanf("%d",&step);
	
	printf("\ndistance = ");
	for(time=0 ; time<10 ;time=time+step)
	{
		temp = (u*time)+(acc*time*time/2);
		printf("%.2f ,",temp);
	}
	
	printf("\b.\n");
}
