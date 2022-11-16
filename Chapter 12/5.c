#include<stdio.h>

void del_char(char *p, char *q, char x);

void main()
{
	char str[20],str1[20];
	char x;
	
	
	printf("Enter character to be deleted : ");
	scanf("%c",&x);
	
	printf("Enter a character string : ");
	scanf("%s",&str);
	
	del_char(str,str1,x);
	
	printf("\nThe altered string is : %s\n",str1);
}

void del_char(char *p, char *q, char x)
{
	while(*p!='\0')
	{
		if(*p!=x)
		{
			*q = *p;
			*q++;	
		}
		*p++;
	}
	*q = '\0';
}
