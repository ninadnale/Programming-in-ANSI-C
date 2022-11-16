#include<stdio.h>

void main()
{
	int units;
	float c1,c2,c3,total;
	char name[10];
	
	printf("Enter name of customer : ");
	scanf("%s",&name);
	
	printf("Enter number of units consumed : ");
	scanf("%d",&units);
	
	if(units>300)
	{
		c1 = (units-300) * 1.0;
		c2 = 100 * 0.9;
		c3 = 200 * 0.8;
	}
	else if(units>200)
	{
		c1 = 0.0;
		c2 = (units-200) * 0.9;
		c3 = 200 * 0.8;
	}
	else
	{
		c1 = 0.0;
		c2 = 0.0;
		c3 = 200 * 0.8;
	}
	
	total = c1+c2+c3;
	
	if(total>400)
		total = total + total*0.15;
	
	printf("The Bill of Mr./Mrs. %s is %.2f \n",name,total);
}
