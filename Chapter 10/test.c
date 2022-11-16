#include<stdio.h>
int fun(void);

int main()
{
	int a = fun();
	printf("Hello World %d\n",a);
	return 0;
}

int fun()
{
	return 5;

