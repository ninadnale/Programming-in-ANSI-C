#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int input(void);
void parameter(void);
void area(void);

int a,b,c;

void main()
{
	int ch;
	
	printf("\nEnter 3 sides of triangle : ");
	scanf("%d %d %d",&a,&b,&c);
	
	do
	{
		ch = input();
		
		switch(ch)
		{
			case 1:
				parameter();
				break;
			case 2:
				area();
				break;
			case 3:
				break;
			default:
				printf("\nPlease Enter a valid choice from menu !!!");
				break;
		}
		
	}while(ch!=3);
	
}

int input(void)
{
	int choice;
	
	printf("\n**********\nMenu : \n\t1. Parameter \n\t2. Area \n\t3. Exit");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);
	
	return choice;
}

void parameter()
{
	int p = a+b+c;
	printf("Parameter of Triangle is : %d\n",p);
}

void area()
{
	float ar,s;
	
	s = (a+b+c)/2;
	ar = sqrt((s-a)*(s-b)*(s-c));
	
	printf("\nArea of Triangle is : %f\n",ar);
}
