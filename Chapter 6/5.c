#include<stdio.h>

void main()
{
	int p,c,m,pm,total;
	
	printf("Enter marks of Physics, Chemistry & Mathematics : ");
	scanf("%d%d%d",&p,&c,&m);
	
	total = p+c+m;
	pm = p+m;
	
	if(p>=50 && c>=40 && m>=60)
	{
		if(total>=200 || pm>=150)
			printf("\nYou're Eligible !!!\n");
		else
			printf("\nSorry you're not eligible !!!\n");
	
	}
	else
		printf("\nSorry you're not eligible !!!\n");
	
}
