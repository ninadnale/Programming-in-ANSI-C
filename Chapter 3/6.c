#include<stdio.h>

#define ROOM_TEMP 25
#define STEP 5
#define HIGHEST 100

void main()
{
	for(int i=ROOM_TEMP ; i<HIGHEST ; i += STEP)
	{
		printf("Temperature is %d C\n",i);
	}
}
