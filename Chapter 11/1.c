#include<stdio.h>

struct time_struct input(struct time_struct get);

struct time_struct
{
	int hour;
	int minute;
	int second;
};

void main()
{
	
	struct time_struct ts = {16,45,51};
	printf("The time is = %d:%d:%d \n",ts.hour,ts.minute,ts.second);

}
