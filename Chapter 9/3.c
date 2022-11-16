#include<stdio.h>

void main()
{
	char str[20],extract[10];
	int m,n;
	
	printf("Enter any String : ");
	scanf("%s",str);
	
	printf("Specify number of characters to be extracted : ");
	scanf("%d",&m);
	
	printf("From which character : ");
	scanf("%d",&n);
	
	int i=0,j=0;
	do
	{
		if(i>=n-1&&i<(n+m)-1)
		{
			extract[j] = str[i];
			j++;
		}
		i++;
		
	}while(str[i]!='\0');
	
	printf("The required portion of string is : %s\n",extract);
	
}
