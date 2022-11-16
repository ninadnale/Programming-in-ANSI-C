#include<stdio.h>

void main()
{
	char str[20];
	int a[20],temp;
	
	printf("Enter a string : ");
	scanf("%s",str);
	
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		a[i] = str[i];
	}
	
	/*for(int j=0;j<i;j++)
	{
		printf(" %d",a[j]);
	}*/
	
	for(int x=0;x<i;x++)
	{
		for(int y=x+1;y<i;y++)
		{
			if(a[x]>a[y])
			{
				temp = a[x];
				a[x] = a[y];
				a[y] = temp;
			}
		}
	}
	
	printf("\nSorted string is : ");
	for(int z=0;z<i;z++)
		printf("%c",a[z]);
	printf("\n");
	
}
