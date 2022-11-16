#include<stdio.h>

void main()
{
	int count;
	
	printf("The numbers Divisible by 6, but not 4 : ");
	for(int i=0;i<=100;i++)
	{
		if(i%6==0 && i%4!=0)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\nThe count of such numbers : %d\n",count);
}
