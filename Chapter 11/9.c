#include<stdio.h>

struct vector
{
	int num[100];
};

void display(struct vector v, int n);
struct vector m_scalar(struct vector v, int n);
struct vector modify(struct vector v, int n);

void main()
{
	struct vector v;
	int n;
	
	printf("Enter number of elements : ");
	scanf("%d",&n);
	
	printf("Enter elements -> ");
	for(int i=0;i<n;i++)
		scanf("%d",&v.num[i]);
	
	display(v,n);
	//MULTIPLY BY SCALAR
	v = m_scalar(v,n);
	display(v,n);
	//MODIFY VALUE OF GIVEN ELEMENT
	v = modify(v,n);
	display(v,n);
	
}

void display(struct vector v, int n)
{
	
	printf("(%d",v.num[0]);
	for(int i=1;i<n;i++)
	{
		printf(", %d",v.num[i]);
	}
	printf(")\n");
		
}

struct vector m_scalar(struct vector v, int n)
{
	
	int m;
	printf("\nEnter multiplication factor : ");
	scanf("%d",&m);
	
	for(int i=0;i<n;i++)
	{
		v.num[i] = m*v.num[i];
	}
	
	return v;
	
}

struct vector modify(struct vector v,int n)
{
	
	int x,z;
	printf("\nEnter the index to be modified : ");
	scanf("%d",&x);
	
	printf("Enter the new value : ");
	scanf("%d",&z);
	
	for(int i=0;i<n;i++)
	{
		if(i==x-1)
			v.num[i] = z;
	}
	
	return v;
	
}
