#include<stdio.h>
#include<string.h>

void main()
{
	int str1[20],str2[20],len;
	
	printf("Enter String 1 : ");
	scanf("%s",str1);
	
	printf("Enter String 2 : ");
	scanf("%s",str2);
	
	len = strlen(str1);
	
	int a = strncmp(str1,str2,len);
	
	if(a>0)
		printf("String 1 is longer than String 2\n");
	else if(a<0)
		printf("String 1 is shorter than String 2\n");
	else
		printf("Both strings are equal\n");
}
