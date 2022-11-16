#include<stdio.h>

int check(int *a, int *b, int x, int y);

void main()
{
	int a[] = {1,2,99,4};
	int b[] = {1,2,3,4};
	int flag;
	
	flag = check(a,b,sizeof(a)/sizeof(int),sizeof(b)/sizeof(int));
	
	if(flag==1)
		printf("\nArrays are identical.\n\n");
	else
		printf("\nArrays are NOT identical.\n\n");
	
}

int check(int *a, int *b, int x, int y)
{
	int i;
	if(x==y)
	{
		for(i=0;i<x;i++)
		{
			if(*(a+i) != *(b+i))
				return 0;
		}
		return 1;
	}
	else
		return 0;
}
