#include<stdio.h>
#include<string.h>

void main()
{
	char txt[100],word[10],rpword[10],temp[50][10];
	int len,count=0;
	
	printf("Enter the text :\n\t");
	gets(txt);
	
	printf("\nEnter the word to be replaced : ");
	scanf("%s",word);
	
	printf("Enter the word with which it is to be replaced : ");
	scanf("%s",rpword);
	
	len = strlen(txt);
	
	int i=0,j=0;
	for(int k=0;k<len;k++)
	{
		if(txt[k]!=' '&&txt[k]!='.')
		{
			temp[i][j] = txt[k];
			j++;
		}
		else
		{
			temp[i][j] = '\0';
			i++;
			j=0;
		}
	}
	
	for(int x=0;x<i;x++)
	{
		if(strcmp(temp[x],word)==0)
			strcpy(temp[x],rpword);
	}
	
	for(int x=0;x<i;x++)
		printf("%s ",temp[x]);
	printf("\b.\n");
	
}
