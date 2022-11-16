#include<stdio.h>

void main()
{
	int count=1;
	int binary=1;
	
		for(int i=1;i<5;i++)
		{
			if(i%2!=0)
				binary=1;
			for(int j=0;j<i;j++)
			{
				if(binary==0)
				{
					printf("%d ",binary);
					binary=1;
				}
				else
				{
					printf("%d ",binary);
					binary=0;
				}
			}
			printf("\n");
		}
		
}

