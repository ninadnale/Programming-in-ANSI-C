#include<stdio.h>
#define LIMIT 20

void toLower(char str[]);
void getl(char str[]);

void main()
{
	char str[20];
	
	printf("Enter any String : ");
	getl(str);
	
	toLower(str);
	
	printf("Converted String : %s\n",str);

}

void getl(char str[])
{
	char c;
	int i;
	for(i=0;i<20&&c!='\n';i++)
		str[i] = c = getchar();
	str[--i]='\0';
}

void toLower(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>64&&str[i]<91)	//check if letter is Uppercase
			str[i] += 32;			//convert it to lowercase
		i++;
	}
}
