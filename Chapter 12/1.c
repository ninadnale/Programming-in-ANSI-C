#include<stdio.h>

void main()
{
	int a[10];
	
	printf("Enter elements of array : ");
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);
		
	printf("\nReverse Order : ");
	for(int i=5;i>0;i--)
		printf("%d ",*(a+i-1));
	
	printf("\n");
	
	printf("%d\n",*a);
}
