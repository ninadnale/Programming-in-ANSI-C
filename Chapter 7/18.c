#include<stdio.h>
#define ROWS 5

void main()
{
	int countn=1,countl=65;
	int j,spaces=1;
	
	for(int i=0;i<ROWS;i++)
	{
		for(int s=0;s<ROWS-spaces;s++)
			printf(" ");
		spaces++;
		if(i%2==0)//print numbers
		{
			j=0;
			while(j<i+1)
			{
				printf("%d ",countn++);
				j++;
			}
		}
		else //print letters
		{
			j=0;
			while(j<i+1)
			{
				printf("%c ",countl++);
				j++;
			}
		}
		printf("\n");
	}
}
