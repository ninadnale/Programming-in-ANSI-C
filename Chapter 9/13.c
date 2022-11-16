#include<stdio.h>

void main()
{
	char s1[20],s2[10];
	int m,n;
	
	printf("Enter any String : ");
	scanf("%s",s1);
	
	printf("Specify number of characters to be extracted : ");
	scanf("%d",&m);
	
	printf("From which character : ");
	scanf("%d",&n);
	
	int i=0,j=0;
	do
	{
		if(i>=n-1&&i<(n+m)-1)
		{
			s2[j] = s1[i];
			j++;
		}
		i++;
		
	}while(s1[i]!='\0');
	
	printf("The required portion of string is : %s\n",s2);
	
}
