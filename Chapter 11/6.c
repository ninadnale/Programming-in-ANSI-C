#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct date_st input(struct date_st dt);
void validate1(struct date_st dt);

struct date_st
{
	int day;
	int month;
	int year;
};

void main()
{
	struct date_st dt;
	
	dt = input(dt);
	validate1(dt);
	
}

struct date_st input(struct date_st get)
{
	long int a;
	
	printf("Enter date in format specified : ");
	scanf("%ld",&a);
	
	get.day = a%100;
	a = a/100;
	
	get.month = a%100;
	a = a/100;
	
	get.year = a;
	
	return get;
}

void validate1(struct date_st dt)
{
	
	char month[13][10] ={" ","January","February","March","April","May","June","July","August","September","October","November","December"};
		
	if(dt.month==4||dt.month==6||dt.month==9||dt.month==11)
	{
		if(dt.day>30)
			printf("Date in Invalid !!!\n");
		
	}
	else if(dt.month==1||dt.month==3||dt.month==5||dt.month==7||dt.month==8||dt.month==10||dt.month==12)
	{
		if(dt.day>31)
		{
			printf("Date in Invalid !!!\n");
			exit(0);
		}
		
	}
	else if(dt.month==2)
	{
		if(dt.day>29 && dt.year%4==0)
		{
			printf("Date in Invalid !!!\n");
			exit(0);
		}
		if(dt.day>28 && dt.year%4!=0)
		{
			printf("Date in Invalid !!!\n");
			exit(0);
		}
	}
	
	printf("Date is Valid !!!\n");
	printf("Today is : %s %d, %d\n", month[dt.month], dt.day, dt.year);
	
}
