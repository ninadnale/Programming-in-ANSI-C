#include<stdio.h>

void main()
{
	char first[10],middle[10],last[10];
	
	printf("Enter first-name, middle-name, last-name : ");
	scanf("%s %s %s",first,middle,last);
	
	printf("Entered name is : %s %c. %s\n",first,middle[0],last);
	printf("Entered name is : %c. %c. %s\n",first[0],middle[0],last);
	printf("Entered name is : %s %c. %c.\n",last,first[0],middle[0]);
	
}
