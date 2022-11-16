#include<stdio.h>

void exchange(int a,int b);
int x,y;

void main()
{
	int a,b;
	
	printf("Enter value of x : ");
	scanf("%d",&x);
	
	printf("Enter value of y : ");
	scanf("%d",&y);
	
	exchange(x,y);	
	printf("Exchanged values are : x = %d & y = %d\n",x,y);
	
}

void exchange(int a,int b)
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;
	
	x=a, y=b;
	
}
