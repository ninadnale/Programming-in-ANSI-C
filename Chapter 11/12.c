#include<stdio.h>

struct census
{
	char city[5];
	int pop;
	float lit;
};

void city_sort(struct census cen[5]);
void pop_sort(struct census cen[5]);
void lit_sort(struct census cen[5]);
void display(struct census cen[5]);

void main()
{
	struct census cen[5];
	
	printf("Enter city information : \n");
	for(int i=0;i<5;i++)
	{
		//printf(" %dth city : ",i);
		scanf("%s %d %f", &cen[i].city, &cen[i].pop, &cen[i].lit);
	}
	
	city_sort(cen);
	//pop_sort(cen);
	//lit_sort(cen);
	display(cen);
	
}

void city_sort(struct census cen[5])
{
	struct census temp;
	for(int i=0;i<5;i++)
		for(int j=i+1;j<5;j++)
		{
			if(cen[i].city[1]>cen[j].city[1])
			{
				temp = cen[i];
				cen[i] = cen[j];
				cen[j] = temp;
			}
		}
	
}

void pop_sort(struct census cen[5])
{
	struct census temp;
	for(int i=0;i<5;i++)
		for(int j=i+1;j<5;j++)
		{
			if(cen[i].pop>cen[j].pop)
			{
				temp = cen[i];
				cen[i] = cen[j];
				cen[j] = temp;
			}
		}
	
}

void lit_sort(struct census cen[5])
{
	struct census temp;
	for(int i=0;i<5;i++)
		for(int j=i+1;j<5;j++)
		{
			if(cen[i].lit>cen[j].lit)
			{
				temp = cen[i];
				cen[i] = cen[j];
				cen[j]= temp;
			}
		}
}

void display(struct census cen[5])
{
	printf("\nIn Display : \n");
	for(int i=0;i<5;i++)
	{
		printf("%s %d %f\n", cen[i].city, cen[i].pop, cen[i].lit);
	}
}
