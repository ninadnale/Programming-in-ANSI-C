#include<stdio.h>

void main()
{
	int n;
	printf("Enter number of students : ");
	scanf("%d",&n);
	
	int result[n][4]; // rollno * subject
	int total[n];
	int h[4],h_roll[4];
	
	printf("\nInput the Result Details : \n");
	
	for(int i=0;i<n;i++)
	{
		printf("\nEntry No. %d :-",i+1);
		printf("\nRoll Number ->");
		scanf("%d",&result[i][0]);
		printf("Subject 1 -> ");
		scanf("%d",&result[i][1]);
		printf("Subject 2 -> ");
		scanf("%d",&result[i][2]);
		printf("Subject 3 -> ");
		scanf("%d",&result[i][3]);
	}
	
	for(int i=0;i<n;i++)
		total [i] = result[i][1] + result[i][2] + result[i][3];
	
	
	printf("\nRoll |\t Subject 1 \t Subject 2 \t Subject 3 \t TOTAL\n");
	printf("------------------------------------------------------------------\n");
	for(int i=0;i<n;i++)
		printf(" %d  |\t    %d     \t    %d     \t    %d     \t   %d  \n",result[i][0],result[i][1],result[i][2],result[i][3],total[i]);
	
	
	h[1]=0,h[2]=0,h[3]=0;
	for(int i=0;i<n;i++)
	{
		if(result[i][1]>h[1])
		{
			h[1] = result[i][1];
			h_roll[1] = result[i][0];
		}
		
		if(result[i][2]>h[2])
		{
			h[2] = result[i][2];
			h_roll[2] = result[i][0];
		}
		
		if(result[i][3]>h[3])
		{
			h[3] = result[i][3];
			h_roll[3] = result[i][0];
		}
		
	}
	
	printf("\n*******HIGEST SCORERS*******\n");
	for(int i=1;i<=3;i++)
		printf("\n       Subject %d -> %d \n          Roll No. -> %d \n",i,h[i],h_roll[i]);
	printf("****************************\n");
	
	int h_total=0,hroll;
	for(int i=0;i<n;i++)
	{
		if(total[i]>h_total)
		{
			h_total = total[i];
			hroll = result[i][0];
		}
	}
	printf("\n\nTOP SCORER (Roll No): %d \nTOTAL MARKS : %d\n\n",hroll,h_total);
	
}
