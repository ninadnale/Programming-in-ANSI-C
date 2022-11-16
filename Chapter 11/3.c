#include<stdio.h>

struct time_struct input(struct time_struct get);
struct time_struct update(struct time_struct ct);

struct time_struct
{
	int hour;
	int minute;
	int second;
};

void main()
{
	struct time_struct ts,ct,ut;
	
	ts = input(ts);
	ut = update(ts);
	
	printf("Updated time is = %2d:%2d:%2d \n",ut.hour,ut.minute,ut.second);
	
}

struct time_struct input(struct time_struct get)
{
	printf("Enter hours, minutes, seconds : ");
	scanf("%d%d%d",&get.hour,&get.minute,&get.second);
	
	return get;
}

struct time_struct update(struct time_struct ts)
{
	if(ts.second == 59)
	{
		ts.second = 00;
		ts.minute += 01;
		
		if(ts.minute == 60)
		{
			ts.minute = 00;
			ts.hour += 01;
			
			if(ts.hour == 24)
			{
				ts.hour = 00;
			}
		}
		
	}
	else
	{
		ts.second += 01;
	}
	
	return ts;
}
