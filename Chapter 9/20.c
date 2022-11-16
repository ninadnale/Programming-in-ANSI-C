#include<stdio.h>

void main()
{
	char str1[40],str2[20];
	
	printf("Enter 1st string : ");
	scanf("%s",str1);
	
	printf("Enter 2nd string : ");
	scanf("%s",str2);
	
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	
	while(str2[j]!='\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str2[j] = '\0';
	
	printf("\nConcatenated string is : %s\n",str1);
	
}
