#include<stdio.h>
#include<string.h>

struct mystruct
{
	long int contact;
	char name[10];
};

void input(struct mystruct *s);

void main()
{
	struct mystruct s1;
	
	input(&s1);
	
	printf("\nName    : %s \nContact : %ld\n",s1.name,s1.contact);
	
}

void input(struct mystruct *s)
{
	
	strcpy(s->name, "Ninad Nale");
	s->contact = 7020989798;
	/*printf("Enter name : ");
	scanf("%s",s->name);
	
	printf("Enter Contact : ");
	scanf("%ld",&s->contact);
	*/
}
