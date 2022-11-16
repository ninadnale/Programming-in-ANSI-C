#include<stdio.h>

void main()
{
	char name[10],a;
	int x=0;
	
	printf("Enter your name : ");
	while(a!='\n')
	{
		a=getchar();
		name[x]=a;
		x++;
		
	}
	
	
	
	printf("ASCII code for your name is : ");
	for(int i=0;name[i]!='\n';i++)
		printf(" %d",name[i]);
	printf("\n");
	
}
