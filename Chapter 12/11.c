#include<stdio.h>
#include<string.h>

char *insert(char *str, char *sub, int p);

void main()
{
	char str[25],substr[7];
	char *str1;
	int pos;
	
	printf("\nEnter the string -> ");
	scanf("%s",str);
	
	printf("Enter the substring -> ");
	scanf("%s",substr);
	
	printf("At which position substring is to be inserted : ");
	scanf("%d",&pos);
	
	str1 = insert(str,substr,pos);
	
	printf("\n***********************************\n");
	printf("\nResultant string is -> %s\n",str1);
	
}

char *insert(char *str, char *sub, int p)
{
	char temp[25];
	
	strcpy(temp,str);
	
	int i=0,j=0,k;
	while(i<p)
		i++;
		
	k=i;
	
	while(j<strlen(sub))
	{
		*(str+i) = *(sub+j);
		i++;
		j++;
	}
	
	while(k<strlen(str))
	{
		*(str+i) = *(temp+k);
		i++;
		k++;
	}
	str[i] = '\0';
	
	printf("Resultant string is -> %s\n",str);
	return str;
	
}
