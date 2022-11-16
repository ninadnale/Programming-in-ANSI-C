#include<stdio.h>

void main()
{
	int amount;
	int a,b,c,d,e,f,g,h,i,a1,b1,c1,d1,e1,f1,g1,h1,i1;
	
	printf("Enter the amount : ");
	scanf("%d",&amount);
	
	a = amount%2000;
	a1 = amount/2000;
	
	b = a%500;
	b1 = a/500;
	
	c = b%100;
	c1 = b/100;
	
	d = c%50;
	d1 = c/50;
	
	e = d%20;
	e1 = d/20;
	
	f = e%10;
	f1 = e/10;
	
	g = f%5;
	g1 = f/5;
	
	h = g%2;
	h1 = g/2;
	
	i = h%1;
	i1 = h/1;
	
	printf("The format is 2000*%d, 500*%d, 100*%d, 50*%d, 20*%d, 10*%d, 5*%d, 2*%d, 1*%d \n",a1,b1,c1,d1,e1,f1,g1,h1,i1);
	
}
