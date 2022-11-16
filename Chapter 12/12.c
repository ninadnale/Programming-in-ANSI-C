#include<stdio.h>

void main()
{
	int a,*x;
	char b,*y;
	float c,*z;
	
	x = &a;
	y = &b;
	z = &c;
	
	long int p1,q1,r1,p2,q2,r2;
	
	p1 = x;
	q1 = y;
	r1 = z;
	p2 = x+1;
	q2 = y+1;
	r2 = z+1;
	
	printf("\n*******SCALE FACTOR*******\n");
	printf("\n   - Integer -> %ld",p2-p1);
	printf("\n   - Character -> %ld",q2-q1);
	printf("\n   - Float -> %ld\n",r2-r1);
	
}
