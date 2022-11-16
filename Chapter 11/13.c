#include<stdio.h>
#include<string.h>

struct hotel
{
	char name[10];
	char address[25];
	int grade;
	float charge;
	int rooms;
};

void sort(struct hotel h[10]);
void display_below(struct hotel h[10], float lim);

// Here, we will do the program for 5 hotels.
void main()
{
	struct hotel h[10];
	int ch;
	float lim;
	
	printf("Enter Information of hotels : -> \n");
	for(int i=0;i<5;i++)
	{
		printf("\nHotel %d :",i+1);
		printf("\n\tName : ");
		scanf("%s",h[i].name);
		printf("\tAddress : ");
		scanf("%s",h[i].address);
		printf("\tgrade : ");
		scanf("%d",&h[i].grade);
		printf("\tAverage Charge : ");
		scanf("%f",&h[i].charge);
		printf("\tNumber of Rooms : ");
		scanf("%d",&h[i].rooms);
	}
	
	
	printf("\n\nMENU : \n\t 1. Display in ascending order of charges. \n\t 2. Display hotels less than required value. \nEnter your choice -> ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			sort(h);
			break;
		
		case 2:
			printf("Enter limit : ");
			scanf("%f",&lim);
			display_below(h,lim);
			break;
	}
	
}

void sort(struct hotel h[10])
{
	char s[25];
	int g,n;
	float c;
	
	for(int i=0;i<5-1;i++)
		for(int j=0;j<5-i-1;j++)
		{
			if(h[j].charge > h[j+1].charge)
			{
				c = h[j].charge;
				h[j].charge = h[j+1].charge;
				h[j+1].charge = c;
				
				g = h[j].grade;
				h[j].grade = h[j+1].grade;
				h[j+1].grade = g;
				
				n = h[j].rooms;
				h[j].rooms = h[j+1].rooms;
				h[j+1].rooms = n;
				
				strcpy(s,h[j].name);
				strcpy(h[j].name,h[j+1].name);
				strcpy(h[j+1].name,s);
				
				strcpy(s,h[j].address);
				strcpy(h[j].address,h[j+1].address);
				strcpy(h[j+1].address,s);
			}
		}
	
	for(int i=0;i<5;i++)
	{
		printf("\nHotel %d :",i+1);
		printf("\n\tName : %s",h[i].name);
		printf("\n\tAddress : %s",h[i].address);
		printf("\n\tgrade : %d",h[i].grade);
		printf("\n\tAverage Charge : %.2f",h[i].charge);
		printf("\n\tNumber of Rooms : %d",h[i].rooms);
	}
	printf("\n");
	
}

void display_below(struct hotel h[10], float lim)
{
	for(int i=0;i<5;i++)
	{
		if(h[i].charge<=lim)
		{
			printf("\nHotel %d :",i+1);
			printf("\n\tName : %s",h[i].name);
			printf("\n\tAddress : %s",h[i].address);
			printf("\n\tgrade : %d",h[i].grade);
			printf("\n\tAverage Charge : %.2f",h[i].charge);
			printf("\n\tNumber of Rooms : %d",h[i].rooms);
		}
	}
	printf("\n");
}
