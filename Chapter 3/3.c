#include<stdio.h>

void main()
{
	int a[100];
	
	printf("Enter numbers : ");
	int i=0;
	int e=0,o=0;
	while(a[i]!=0)
	{
		
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
			e++;
		else
			o++;
			
		i++;
	}
	
	printf("\nEven numbers %d \nOdd numbers %d\n",e,o);
}
