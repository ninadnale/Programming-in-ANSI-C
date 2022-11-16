#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct product
{
	char code[10];
	char cost[7];
	char available[5];
};

void main()
{
	FILE *f;
	char fname[15];
	char code[10];
	struct product s[5];
	
	printf("Enter filename : ");
	scanf("%s",fname);
	
	f = fopen(fname,"r");
	
	printf("Enter code of product to be searched : ");
	scanf("%s",&code);
	
	for(int i=0;i<5;i++)
	{
		fscanf(f,"%s %s %s",s[i].code,s[i].cost,s[i].available);
		
		if(strcmp(code,s[i].code)==0)
			printf("Details of product '%s' :\n\t cost -> %s \n\t Availability -> %s \n",s[i].code,s[i].cost,s[i].available);
		
	}
	fclose(f);
	
}
//TO PRINT ALTERNATE PRODUCTS FROM FILE JUST PRINT ONLY ON ODD/EVEN VALUES OF i
