#include<stdio.h>

void main()
{
	int num;
	
	for(int i=0;i<=6;i++)
	{
		for(int x=0;x<6-i;x++)
			printf("*");
		
		for(int j=0;j<=i;j++)
		{
			if(j==0 || i==0)
				num = 1;
			else
				num = num * (i-j+1)/j;
			
			printf("%d ",num);
		}
		printf("\n");
	}
}
