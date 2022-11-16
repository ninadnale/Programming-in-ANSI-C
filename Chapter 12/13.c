#include<stdio.h>

void main()
{
	char *arr[3] = {"New Zealand","Australia","India"};
	
	printf("Address     |   Value\n");
	printf("-----------------------------\n");
	for(int i=0;i<3;i++)
	{
		printf("%u   |   %s\n",arr+i,*(arr+i));
	}
	
	printf("%d\n",sizeof(arr));
	
}
