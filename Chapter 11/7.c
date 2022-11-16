#include<stdio.h>
#include<stdlib.h>

struct date_st input(struct date_st dt);
int validate(struct date_st dt);
void nextdate(struct date_st data, int add);

struct date_st
{
	int day;
	int month;
	int year;
};

char month[13][10] = {" ","January","February","March","April","May","June","July","August","September","October","November","December"};

void main()
{
	struct date_st data;
	int valid, add;
	
	data = input(data);
	valid = validate(data);
	if(valid)
	{
		printf("\nEnter number of days to add : ");
		scanf("%d",&add);
		nextdate(data, add);
	}
}

struct date_st input(struct date_st get)
{
	printf("Enter day, month & year : ");
	scanf("%d%d%d",&get.day,&get.month,&get.year);
	
	return get;
}

int validate(struct date_st dt)
{
	
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

void nextdate(struct date_st dt, int add)
{
	int temp = dt.day;
	if(dt.month==4||dt.month==6||dt.month==9||dt.month==11)
	{
		temp += add;
		if(temp>30)
		{
			dt.day = temp - 30;
			dt.month++;
			
			if(dt.month>12)
			{
				dt.month = 1;
				dt.year++;
			}
		}
		else
		{
			dt.day = temp;
		}
	}
	else if(dt.month==1||dt.month==3||dt.month==5||dt.month==7||dt.month==8||dt.month==10||dt.month==12)
	{
		temp += add;
		if(temp>31)
		{
			dt.day = temp-31;
			dt.month++;
			
			if(dt.month>12)
			{
				dt.month = 1;
				dt.year++;
			}
		}
		else
		{
			dt.day = temp;
		}
		
	}
	else if(dt.month==2)
	{
		temp += add;
		if(temp>29 && dt.year%4==0)
		{
			dt.day = temp-29;
			dt.month++;
			
			if(dt.month>12)
			{
				dt.month = 1;
				dt.year++;
			}
		}
		else
		{
			dt.day = temp;			
		}
		
		if(temp>28 && dt.year%4!=0)
		{
			dt.day = temp-28;
			dt.month++;
			
			if(dt.month>12)
			{
				dt.month = 1;
				dt.year++;
			}
		}
		else
		{
			dt.day = temp-31;			
		}
	}
	
	printf("The next date after %d days is : %s %d, %d\n", add, month[dt.month], dt.day, dt.year);
}
