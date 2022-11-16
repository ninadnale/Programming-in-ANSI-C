#include<stdio.h>

char *day_name(int n);

static char days[9][15] = {"Invalid","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

void main()
{
	int n;
	
	printf("Enter number of day : ");
	scanf("%d",&n);
	
	char *p;
	
	p = day_name(n);
	
	printf("%s\n",p);
}

char *day_name(int n)
{
	return days[n];
}
