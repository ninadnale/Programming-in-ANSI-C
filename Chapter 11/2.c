#include<stdio.h>

struct time_struct input(struct time_struct get);
void display(struct time_struct show);

struct time_struct
{
	int hour,minute,second;
};

/**********/
void main()
{
	struct time_struct ts;
	
	ts = input(ts);
	display(ts);
}
/**********/

struct time_struct input(struct time_struct get)
{
	printf("Enter hours, minutes, seconds : ");
	scanf("%d%d%d",&get.hour,&get.minute,&get.second);
	
	return get;
}

void display(struct time_struct show)
{
	printf("The time is = %d:%d:%d \n",show.hour,show.minute,show.second);
}
