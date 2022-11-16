#include<stdio.h>
#include<math.h>

void main()
{
	printf("\nNumber\tSquare-root\tSquare\n--------------------------------\n");
	
	for(int i=0;i<=100;i+=10)
	{
		printf("%3d\t   %4.2f\t\t%d\n",i,sqrt(i),i*i);
	}
}
