#include<stdio.h>

struct student
{
	int marks;
	char name[10];
	int roll;
};

void input(struct student *sp);

void main()
{
	struct student s;
	
	printf("Enter data :- \n");
	input(&s);
	
	printf("\n****************************");
	printf("\nStudent Name -> %s \nRoll No. -> %d \nMarks -> %d \n",s.name,s.roll,s.marks);
	
}

void input(struct student *sp)
{
	printf("Enter name : ");
	scanf("%s",sp->name);
	printf("Enter Roll number : ");
	scanf("%d",&sp->roll);
	printf("Enter marks : ");
	scanf("%d",&sp->marks);
}
// To use pointer to structure use -> operator to access structure members.
