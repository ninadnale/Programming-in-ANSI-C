#include<stdio.h>

void main()
{
	char input[15];
	int a;
	
	printf("Enter the name of month : ");
	scanf("%s",&input);
	
	if(input=="January"||input=="March"||input=="May"||input=="July"||input=="August"||input=="October"||input=="December")
		a = 1;
	else if(input=="April"||input=="June"||input=="September"||input=="November")
		a = 2;
	else
		a = 3;
	
	switch(a)
	{
		case 1:
			printf("This month has 31 Days\n");
			break;
		
		case 2:
			printf("This month has 30 Days\n");
			break;
		
		case 3:
			printf("This month has 28 Days\n");
			break;
		
		default:
			printf("Enter a valid month !!!");
			break;	
	}
}
