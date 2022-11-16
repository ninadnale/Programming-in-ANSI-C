#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	char ISBN[11];
	char temp[10];
	int code[4];
	int region,publisher,ID,check;
	
	printf("Enter the ISBN : ");
	scanf("%s",&ISBN);
	
	int i=0,j;
	for(int x=0;x<3;x++)
	{
		j=0;
		while(ISBN[i] != '-')
		{
			temp[j++] = ISBN[i];
			i++;
		}
		temp[j] = '\0';
		code[x] = atoi(temp);
		i++;
	}
	
	j=0;
	while(ISBN[i] != '\0')
	{
		temp[j++] = ISBN[i];
		i++;
	}
	temp[j] = '\0';
	code[3] = atoi(temp);
	
	for(int z=0;z<4;z++)
		printf("%d\n",code[z]);
	
	region = code[0];
	publisher = code[1];
	ID = code[2];
	check = code[3];
	
	int sum=0,x,num=pow(10,j-1);
	i=1;
	while(check>0)
	{
		x = check/num;
		check = check%num;
		num = num/10;
		
		sum += x*i;
		i++;
	}
	
	printf("\n%d\n",sum);
	if(sum%11 == code[3])
		printf("Book has Valid ISBN\n");
	else
		printf("Book does not have Valid ISBN\n");
	
}
