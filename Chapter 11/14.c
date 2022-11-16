#include<stdio.h>
#include<string.h>

struct cricket
{
	char pname[15];
	char tname[20];
	float average;
};

void main()
{
	struct cricket player[50];
	char team[7][20];
	int flag;
	
	printf("Enter Information :- \n");
	for(int i=0;i<6;i++) //Here we will accept only 6 entries, but 50 can be done
	{
		printf("\nEntry %d:\n",i+1);
		
		printf("Enter Player name -> ");
		scanf("%s",player[i].pname);
		printf("Enter Team name -> ");
		scanf("%s",player[i].tname);
		printf("Enter Batting Average -> ");
		scanf("%f",&player[i].average);
	}
	
	//Display Team-wise
	int t = 0;
	for(int i=0;i<6;i++)
	{
		flag = 0;
		for(int j=0;j<6;j++)
		{
			if(strcmp(player[i].tname,team[j])==0)
				flag = 1;
		}
		
		if(flag==0)
			strcpy(team[t++],player[i].tname);
	
	}
	
	printf("\n*******TEAM-WISE LIST*******\n");
	for(int j=0;j<t;j++)
	{
		printf("\nTeam %s ->",team[j]);
		for(int i=0;i<6;i++)
		{
			if(strcmp(team[j],player[i].tname)==0)
				printf("\n\tPlayer name : %s\n\tBatting Average : %.2f\n",player[i].pname,player[i].tname,player[i].average);
		}
	}
	
	
}
