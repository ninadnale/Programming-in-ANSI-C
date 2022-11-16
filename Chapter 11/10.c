#include<stdio.h>

struct vector
{
	int num[100];
};

void display(struct vector v, int n);
struct vector m_scalar(struct vector v, int n);
struct vector modify(struct vector v, int n);
struct vector add(struct vector v1, int n1,struct vector v2, int n2);

void main()
{
	struct vector v,v1,v2;
	int n1,n2;
	
	printf("Enter number of elements of 1st vector : ");
	scanf("%d",&n1);
	
	printf("Enter elements -> ");
	for(int i=0;i<n1;i++)
		scanf("%d",&v1.num[i]);
	
	printf("Enter number of elements of 2nd vector : ");
	scanf("%d",&n2);
	
	printf("Enter elements -> ");
	for(int i=0;i<n2;i++)
		scanf("%d",&v2.num[i]);
	
	
	//display(v1,n1);
	//display(v2,n2);
	/*
	//MULTIPLY BY SCALAR
	v = m_scalar(v,n);
	display(v,n);
	
	//MODIFY VALUE OF GIVEN ELEMENT
	v = modify(v,n);
	display(v,n);
	*/
	
	//ADD two vectors
	v = add(v1,n1,v2,n2);
	printf("\nAddition is -> ");
	if(n1<n2)
		display(v,n2);
	else
		display(v,n1);
	
}

struct vector add(struct vector v1, int n1,struct vector v2, int n2)
{
	
	struct vector v;
	int i;
	
	if(n1<n2)
	{
		for(i=0;i<n1;i++)
			v.num[i] = v1.num[i] + v2.num[i];
		
		for(i=n1;i<n2;i++)
			v.num[i] = v2.num[i];
	}
	else if(n2<n1)
	{
		for(i=0;i<n2;i++)
			v.num[i] = v1.num[i] + v2.num[i];
		
		for(i=n2;i<n1;i++)
			v.num[i] = v1.num[i];
	}
	else
	{
		for(i=0;i<n1;i++)
			v.num[i] = v1.num[i] + v2.num[i];
	}
	
	return v;
	
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
