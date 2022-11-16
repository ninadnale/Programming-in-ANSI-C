#include<stdio.h>

void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);

void main()
{
	int num1,num2;
	char ch;
	
	printf("***** CALCULATOR *****\n\n");
	
	printf("Enter 1st number -> ");
	scanf("%d",&num1);
	
	printf("Enter 2nd number -> ");
	scanf("%d",&num2);
	
	printf("\nMenu :\n\tAddition (+)\n\tSubtraction (-)\n\tMultiplication (*)\n\tDivision (/)\nEnter your choice : ");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case '+':
			add(num1,num2);
			break;
		
		case '-':
			subtract(num1,num2);
			break;
		
		case '*':
			multiply(num1,num2);
			break;
		
		case '/':
			divide(num1,num2);
			break;
		
		default:
			printf("WRONG CHOICE !!!\n");
			break;
	}
	
}

void add(int a, int b)
{
	printf("\nSolution : %d\n",a+b);
}

void subtract(int a, int b)
{
	printf("\nSolution : %d\n",a-b);
}

void multiply(int a, int b)
{
	printf("\nSolution : %d\n",a*b);
}

void divide(int a, int b)
{
	printf("\nSolution : %d\n",a/b);
}
