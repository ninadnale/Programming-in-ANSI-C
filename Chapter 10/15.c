#include<stdio.h>
#include<stdlib.h>

void strcopy(char str1[],char str2[]);
void strcomp(char str1[],char str2[]);
void strappend(char str1[],char str2[]);

void main()
{
	char str1[50],str2[50];
	int ch;
	
	printf("\nEnter 1st String : ");
	scanf("%s",str1);
	printf("Enter 2nd String : ");
	scanf("%s",str2);
	
	printf("\nMenu : \n\t1. Copy (copies 2nd String to 1st) \n\t2. Compare (compares 1st & 2nd string) \n\t3. Append (appends 2nd string at the end of 1st) \n\t4. Exit ");
	printf("\nEnter choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			strcopy(str1, str2);
			break;
		case 2:
			strcomp(str1, str2);
			break;
		case 3:
			strappend(str1, str2);
			break;
		case 4:
			exit(0);
			break;
		default:
			printf("\nPlease Enter a valid choice from menu !!!");
			break;
	}
	
	
}

void strcopy(char str1[], char str2[])
{
	int i=0,j=0;
	
	while(str2[j]!='\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
	
	printf("\nString 2 is copied into String 1. \nString 1 is : ");
	printf("%s\n",str1);
}

void strcomp(char str1[],char str2[])
{
	int flag = 0;
	int i,j;
	
	for(i=0,j=0 ; str1[i]!='\0' && str2[j]!='\0' ; i++,j++)
	{
		if(str1[i]!=str2[j])
			flag = 1; 
	}
	
	if(flag==0)
		printf("\nStrings are equal ...\n");
	else
		printf("\nStrings are NOT equal !!!\n");
}

void strappend(char str1[], char str2[])
{
	int i=0,j=0;
	
	while(str1[i]!='\0')
		i++;
	
	while(str2[j]!='\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	
	printf("\nString is appended : %s\n",str1);
}
