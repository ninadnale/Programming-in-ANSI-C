#include<stdio.h>
#include<string.h>

void main()
{
	char ans[20];
	char cans[20] = "Dennis Ritchie";
	
	printf("\nAnswer following question in maximun 3 attempts");
	printf("\n\nWho is the inventor of C : ");	
	
	int flag=0,i;
	for(i=1;i<=3&&flag==0;i++)
	{
		//scanf("%[^\n]s",ans); -> Unable to read input in loop
		gets(ans);
		if(strcmp(cans,ans)==0)
		{
			printf("\nCorrect Answer");
			flag = 1;
		}
		else
		{
			printf("Wrong Answer....");
		}
	}
	
	if(flag==1)
		printf("\nYour answer was correct in attempt %d !!!\n",i-1);
	else
		printf("\nThe correct answer is : Dennis Ritchie\n");
}
