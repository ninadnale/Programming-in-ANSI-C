#include<stdio.h>

void read_arr();
void sort_arr(int x[]);
void merge_arr();
void display();

int arr1[20],arr2[20],arr3[40],s1,s2;

void main()
{
	read_arr();
	sort_arr(arr1);
	sort_arr(arr2);
	merge_arr(arr1,arr2);
	display();
}

void read_arr()
{

	printf("\nEnter size of 1st array : ");
	scanf("%d",&s1);
	printf("Enter elements of 1st array one by one : ");
	for(int i=0;i<s1;i++)
		scanf("%d",&arr1[i]);
	
	printf("\nEnter size of 2nd array : ");
	scanf("%d",&s2);
	printf("Enter elements of 2nd array one by one : ");
	for(int i=0;i<s2;i++)
		scanf("%d",&arr2[i]);
	
}

void sort_arr(int x[])
{
	printf("\nSorting .....\n");
	for(double z=0;z<300000000;z++)
		;
	int temp;
	
	for(int i=0;i<s1;i++)
		for(int j=i+1;j<s1;j++)
		{
			if(x[i]>x[j])
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
}

void merge_arr(int arr1[], int arr2[])
{
	int i,j;
	
	for(i=0;i<s1;i++)
		arr3[i] = arr1[i];
	
	for(j=0;j<s2;j++,i++)
		arr3[i] = arr2[j];
}

void display()
{
	printf("\nThe sorted array is : ");
	
	printf("\nArray 1 : ");
	for(int i=0;i<s1;i++)
		printf("%d ",arr1[i]);
	printf("\n");
	
	printf("Array 2 : ");
	for(int i=0;i<s2;i++)
		printf("%d ",arr2[i]);
	printf("\n");
	
	printf("\nThe merged array is :");
	printf("\nArray 3 : ");
	for(int i=0;i<(s1+s2);i++)
		printf("%d ",arr3[i]);
	printf("\n");
	
}
