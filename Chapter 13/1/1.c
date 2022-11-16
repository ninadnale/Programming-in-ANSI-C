#include<stdio.h>

void main()
{
	FILE *fp1,*fp2;
	char c;
	
	fp1 = fopen("text1.txt","r");
	fp2 = fopen("text2.txt","w");
	
	while((c=getc(fp1)) != EOF)
	{
		putc(c,fp2);
	}
	printf("Data copied succesfully!\n");
	
}
