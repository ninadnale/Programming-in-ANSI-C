#include<stdio.h>
#include<string.h>

void locate(char s1[10], char s2[10], int m);

void main()
{
	char s1[10],s2[10];
	int m;
	
	printf("Enter string 1 : ");
	scanf("%s",s1);
	
	printf("Enter string 2 : ");
	scanf("%s",s2);
	
	printf("Enter index at which s2 is to be inserted : ");
	scanf("%d",&m);
	
	locate(s1,s2,m);
	
}

void locate(char s1[10],char s2[10],int m)
{
	char s3[10];
	
	int j=0;
	
	strcpy(s3,s1);
	/*for(int i=0;i<strlen(s1);i++)
	{
		s3[i] = s1[i];
	}*/
	
	while(j<m)
		j++;
	
	for(int i=0;i<strlen(s2);i++)
	{
		s1[j] = s2[i];
		j++;
	}
	
	for(int k=m;k<strlen(s1);k++)
	{
		s1[j] = s3[k];
		j++; 
	}
	s1[j] = EOF;
	
	printf("\nResulting String is -> %s\n",s1);
	
}
