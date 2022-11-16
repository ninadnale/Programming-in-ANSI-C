#include<stdio.h>

void main()
{
	int num,i,flag;
	int count=0;
	
	//printf("Enter the number : ");
	//scanf("%d",&num);
	
	for(i=100;i<=200;i++)
	{
		flag = 0;
		num = i-1;
		while(num>2)
		{
			if(i%num==0)
				flag = 1;
			num--;
		}
		
		if(flag==0)
			count++;
		
	}
	
	printf("There are '%d' prime numbers between 100 & 200.\n",count);
	
	/*if(flag==0)
		printf("The number is prime !!!\n");
	else
		printf("The number is a composite number\n");
	*/
}
