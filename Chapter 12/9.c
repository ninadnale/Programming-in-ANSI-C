#include<stdio.h>

void fun(char *str,char *rev, int n);

void main()
{
	char str[10],rev[10];
	
	printf("Enter string : ");
	scanf("%s",str);
	
	int i=0;
	while(str[i] != '\0')
		i++;
	
	fun(str,rev,i-1); //no need to write '&' before str here, since it is declared as an array
	
	printf("Reverse is -> %s\n",rev);
	
}

void fun(char *str, char *rev, int n)
{
	int i=0;	
	while(n>=0)
	{
		*(rev+i) = *(str+n);
		i++;
		n--;
	}
	*(rev+i) = '\0';
	
}
