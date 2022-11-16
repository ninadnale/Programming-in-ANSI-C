#include<stdio.h>

void main()
{
	char a[10];
	int l,lower=0,upper=0;
	
	printf("Enter length of string : ");
	scanf("%d",&l);
	printf("Enter a string : ");
	scanf("%s",&a);
	
	for(int i=0;i<l;i++)
	{
		if(a[i]>96&&a[i]<123)
			lower++;
		else if(a[i]>64&&a[i]<91)
			upper++;
	}
	
	printf("Lower case letters = %d\nUpper case letters = %d\n",lower,upper);
	
}
