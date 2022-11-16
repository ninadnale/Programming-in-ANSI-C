#include<stdio.h>

void main()
{
	int num = 1,count=1;
	while(num<91)
	{
		for(int i=0;i<count;i++)
		{
			printf("%d ",num++);
		}
		printf("\n");
		count++;
	}
	printf("\n\n\n");
	num=1,count=1;
	int binary=1;
	while(num<16)
	{
		for(int i=0;i<count;i++)
		{
			if(binary==0)
			{
				printf("%d ",binary);
				binary=1;
				num++;
			}
			else
			{
				printf("%d ",binary);
				binary=0;
				num++;
			}
		}
		printf("\n");
		count++;
	}
}
