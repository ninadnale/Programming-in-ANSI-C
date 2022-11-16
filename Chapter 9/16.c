#include<stdio.h>

void main()
{
	char str1[20],str2[20];
	int flag=0;
	
	printf("Enter 1st String : ");
	scanf("%s",str1);
	
	printf("Enter 2nd String : ");
	scanf("%s",str2);
	
	
	int i=0;
	while(str1[i]!='\0')
	{
		if(str1[i]==str2[i])
			i++;
		else
			break;
	}
	
	if(str1[i]==str2[i])
		printf("\n Both strings are equal ...\n");
	else
		printf("\n Strings are unequal !!!\n");
	
}
