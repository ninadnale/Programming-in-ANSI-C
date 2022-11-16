#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct date_st input(struct date_st dt);
int validate1(struct date_st dt);

struct date_st
{
	int day;
	int month;
	int year;
};

struct student_record
{
	char name[15];
	struct date_st dt;
	int marks;
};

void main()
{
	int n;
	struct student_record stud[100];
	
	printf("Enter number of students : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("\nEnter name of student : ");
		scanf("%s",stud[i].name);
		printf("Enter Date of Birth : ");
		stud[i].dt = input(stud[i].dt);
		printf("Enter marks : ");
		scanf("%d",&stud[i].marks);
	}
	
	//DISPLAY DATA
	printf("\n*******INFORMATION*******\n");
	for(int i=0;i<n;i++)
	{
		printf("\nName -> %s,\nDate of Birth -> %d/%d/%d,\nTotal Marks -> %d\n",stud[i].name,stud[i].dt.day,stud[i].dt.month,stud[i].dt.year,stud[i].marks);
	}
	
}

struct date_st input(struct date_st get)
{
	printf("Enter day, month & year : ");
	scanf("%d%d%d",&get.day,&get.month,&get.year);
	
	int check = validate1(get);
	
	if(check == 0)
		return get;
	else
		printf("Date Invalid !!!\n");
	
}

int validate1(struct date_st dt)
{
	
	char month[13][10] ={" ","January","February","March","April","May","June","July","August","September","October","November","December"};
		
	if(dt.month==4||dt.month==6||dt.month==9||dt.month==11)
	{
		if(dt.day>30)
		{
			return 1;
			exit(0);
		}
		
	}
	else if(dt.month==1||dt.month==3||dt.month==5||dt.month==7||dt.month==8||dt.month==10||dt.month==12)
	{
		if(dt.day>31)
		{
			return 1;
			exit(0);
		}
		
	}
	else if(dt.month==2)
	{
		if(dt.day>29 && dt.year%4==0)
		{
			return 0;
			exit(0);
		}
		if(dt.day>28 && dt.year%4!=0)
		{
			return 1;
			exit(0);
		}
	}
	
	return 0;
	
}
