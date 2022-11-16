#include<stdio.h>

void main()
{
	int a=5,b=4;
	
	printf("Without using cast-operator --> a/b = %f\n",a/b);
	printf("With using cast-operator --> a/b = %f\n",(float)a/b);
	
}
