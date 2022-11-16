#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct date_st input(struct date_st dt);
int validate1(struct date_st dt);
void check(struct date_st data, struct date_st newdata);

struct date_st
{
	int day;
	int month;
	int year;
};

void main()
{
	struct date_st data, newdata;
	
	data = input(data);
	newdata = input(newdata);
	if(validate1(data) && validate1(newdata))
		check(data, newdata);
}

struct date_st input(struct date_st get)
{
	printf("Enter day, month & year : ");
	scanf("%d%d%d",&get.day,&get.month,&get.year);
	
	return get;
}

int validate1(struct date_st dt)
{
	
	char month[13][10] ={" ","January","February","March","April","May","June","July","August","September","October","November","December"};
		
	if(dt.month==4||dt.month==6||dt.month==9||dt.month==11)
	{
		if(dt.day>30)
		{
			printf("Date in Invalid !!!\n");
			exit(0);
		}
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
	
	return 1;
}

void check(struct date_st data, struct date_st newdata)
{
	int flag = 0;
	if(newdata.year > data.year)
	{
		flag = 1;
	}
	else if(newdata.year = data.year)
	{
		if(newdata.month > data.month)
		{
			flag = 1;
		}
		else if(newdata.month = data.month)
		{
			if(newdata.day > data.day)
			{
				flag = 1;
			}
		}
	}
	
	if(flag==1)
		printf("Date 1 is earlier than Date 2\n");
	else
		printf("Date 1 is later than Date 2\n");
}
