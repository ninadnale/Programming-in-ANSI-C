#include<stdio.h>

void main()
{
	char a[20]="NEW YORK";
	
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	
	printf("Number of Characters : %d\n",i);
	printf("\nInteger for (EOF character) is : %d\n",EOF);
}
