#include<stdio.h>
#include<string.h>

void main()
{
	char str[20];
	int len,flag=0;
	
	printf("Enter a string : ");
	scanf("%s",str);
	
	len = strlen(str);
	
	int i=0;
	int j=len-1;
	while(i<j)
	{
		if(str[i]==str[j])
		{
			i++;
			j--;
		}
		else
		{
			flag=1;
			break;
		}	
	}
	
	if(flag==0)
		printf("\nGiven string is Palindrome...\n");
	else
		printf("\nNOT a Palindrome !!!\n");
}
