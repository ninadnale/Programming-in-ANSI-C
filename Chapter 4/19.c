#include<stdio.h>

void main()
{
	int day,month,year;
	
	printf("Enter date (DD/MM/YYYY) : ");
	scanf("%d%d%d",&day,&month,&year);
	
	if(month==2)
	{
		if(year%4==0 && day>0 && day<30)
			printf("\nDate is VALID !!!\n");
		else if(year%4!=0 && day>0 && day<29)
			printf("\nDate is VALID !!!\n");
	}
	else if(month==2 || month==4 || month==6 || month==9 || month==11)
	{
		if(day>0 && day<31)
			printf("\nDate is VALID !!!\n");
	}
	else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	{
		if(day>0 && day<32)
			printf("\nDate is VALID !!!\n");
	}
	else
		printf("\nDate is NOT Valid !!!\n");
	
}
