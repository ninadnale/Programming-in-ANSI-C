#include<stdio.h>

int find(char a[100],char key);

void main()
{
	char c,ch,text[100];
	int check,i=0;
	
	printf("Enter text (Enter '#' to terminate) : ");
	while((c=getchar())!= '#')
	{
		text[i++] = c;
	}
	
	printf("\nEnter character to be searched : ");
	scanf(" %c",&ch);
	
	check = find(text,ch);
	
	if(check==0)
		printf("\nCharacter is NOT-found !!!\n");
	else
		printf("\nCharacter is Found ...\n");
	
}

int find(char a[100], char key)
{
	int i=0;
	while(a[i] != EOF)
	{
		if(key==a[i])
			return 1;
		i++;
	}
	
	return 0;
	
}
