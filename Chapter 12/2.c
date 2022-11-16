#include<stdio.h>
#include<math.h>

struct constants
{
	int a;
	int b;
	int c;
};

struct roots
{
	float x1;
	float x2;
};

void calculate(struct constants *con, struct roots *r);

void main()
{
	struct constants con;
	struct roots r;
	
	printf("Enter values of a, b & c : ");
	scanf("%d%d%d",&con.a,&con.b,&con.c);
	
	calculate(&con,&r);
	
	printf("\nRoots are : \n\tx1 = %.2f \n\tx2 = %.2f \n",r.x1,r.x2);
	
}

void calculate(struct constants *c1, struct roots *r1)
{
	r1->x1 = (-(c1->b)+sqrt(c1->b*c1->b - 4*c1->a*c1->c)) / (2*c1->a);
	r1->x2 = (-(c1->b)-sqrt(c1->b*c1->b - 4*c1->a*c1->c)) / (2*c1->a);
}

