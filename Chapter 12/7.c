#include<stdio.h>
#include<string.h>

void sort(char (*name)[10], int n);
void swap(char* str1, char* str2);

void main()
{
	int n;
	char names[10][10];
	
	printf("Enter number of entries : ");
	scanf("%d",&n);
	
	printf("Enter names : ");
	for(int i=0;i<n;i++)
		scanf("%s",&names[i]);
	
	//int j=0;
	//printf("%d\n",strcmp((names[j]),(names[j+1])));
	sort(names,n);
	
	printf("\n");
	printf("Sorted names : ");
	for(int i=0;i<n;i++)
		printf("%s ",names[i]);
	printf("\n");
	
}

void swap(char* str1, char* str2)
{
	
    int i=0,j=0,k=0;
    char temp[10];
    
    while(str1[i]!='\0')
  	{
		temp[j]=str1[i];
		i++;
		j++;
	}
	temp[j]='\0';
  	i=0, j=0;
  	while(str2[i]!='\0')
  	{
		str1[j]=str2[i];
		i++;
		j++;
 	}
  	str1[j]='\0';
  	i=0, j=0;
  	while(temp[i]!='\0')
  	{
		str2[j]=temp[i];
		i++;
		j++;
  	}
  	str2[j]='\0';
  	
}

void sort(char (*name)[10], int n)
{
	char *temp;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(strcmp(*(name+j),*(name+j+1))>0)
			{
				swap(*(name+j),*(name+j+1));
			}
		}
	}
	
}
