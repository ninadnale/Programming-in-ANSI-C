#include<stdio.h>

struct metric
{
	int meters;
	int centimeters;
};

struct British
{
	int feet;
	int inches;
};

void metricadd(struct metric m, struct British b);
void britishadd(struct metric m, struct British b);

void main()
{
	struct metric m;
	struct British b;
	int ch;
	
	printf("1. Enter Values (in metric system) : ");
	scanf("%d %d", &m.meters,&m.centimeters);
	
	printf("2. Enter values (in British system) : ");
	scanf("%d %d", &b.feet, &b.inches);
	
	printf("\nEnter choice representation for result : ");
	printf("\n\t1. Metric \n\t2. British\n***Your Choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			metricadd(m,b);
			break;
		case 2:
			britishadd(m,b);
			break;
		default:
			printf("\nPlease Enter a Valid Choice !!!");
			break;
	}
	
}

void metricadd(struct metric m, struct British b)
{
	float x,y;
	
	x = b.feet * 0.3048;
	y = b.inches * 2.54;
	
	float res1,res2;
	
	res1 = x + m.meters;
	res2 = y + m.centimeters;
	
	printf("\nAddition is : %f meters, %f centimeters\n", res1, res2);
	
}

void britishadd(struct metric m, struct British b)
{
	float x,y;
	
	x = m.meters * 3.2808;
	y = m.centimeters * 0.3937;
	
	float res1,res2;
	
	res1 = x + b.feet;
	res2 = y + b.inches;
	
	printf("\nAddition is : %f meters, %f centimeters\n", res1, res2);
	
}
