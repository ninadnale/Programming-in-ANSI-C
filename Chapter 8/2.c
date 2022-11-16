#include<stdio.h>

void main()
{
	int temp[31][31];
	
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=3;j++)
		{
			printf("Enter temperature for city %d, Day %d : ",j,i);
			scanf("%d",&temp[i][j]);
		}
	}
	
	printf("\tTable for all temperatures \n");
	printf("-------------------------------- \n  ");
	
	for(int x=0;x<3;x++)
		printf("%2d ",x);
	printf("-------------------------------- \n");
	for(int i=1;i<=10;i++)
	{
		printf("%d|",i);
		for(int j=1;j<=3;j++)
		{
			printf("%2d ",temp[i][j]);
		}
		printf("\n");
	}
	
	int min=temp[1][1],max=temp[1][1];
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=3;j++)
		{
			if(min>temp[i][j])
				min = temp[i][j];
			if(max<temp[i][j])
				max = temp[i][j];
		}
	}
	
	printf("\nHighest temperature is : %d \nLowest temperature is : %d\n",max,min);
	
	
}
