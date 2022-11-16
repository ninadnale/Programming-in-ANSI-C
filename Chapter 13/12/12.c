#include<stdio.h>

void main()
{
	int a[100],i;
	int temp,read;
	char c;
	
	FILE *f1,*f2;
	
	f1 = fopen("read.txt","w");
	printf("Enter integers in first file : ");
	while(1)
	{
		scanf("%d",&read);
		if(read != -1)
			putw(read,f1);
		else
			break;
		
	}
	fclose(f1);
	
	f1 = fopen("read.txt","r");
	f2 = fopen("reverse.txt","w");
	
	i=0;
	while((temp=getw(f1)) != -1)
	{
		a[i] = temp;
		i++;
	}
	
	for(int n=i;n>=0;n--)
	{
		putw(a[n],f2);
	}
	
	fclose(f1);
	fclose(f2);
	
	f2 = fopen("reverse.txt","r");
	printf("Contents of reverse.txt are : ");
	temp = getw(f2);
	while((temp = getw(f2)) != -1)
	{
		printf("%d ",temp);
	}
	printf("\n");
	fclose(f2);
	
}
