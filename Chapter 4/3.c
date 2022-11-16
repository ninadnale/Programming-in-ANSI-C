#include<stdio.h>
#include<math.h>

void main()
{
	int num,n,a[100],mul=1;
	
	printf("Enter the number of digits : ");
	scanf("%d",&n);
	printf("Enter the number : ");
	scanf("%d",&num);
	
	for(int i=0;i<n-1;i++)
	{
		mul = mul*10;
	}
	
	//printf("\n%d\n",n);
	for(int i=0;i<n;i++)
	{
		a[i] = num/mul;
		num = num%mul;
		mul = mul/10;
		
	}
	
	int j=0,x=n;
	while(x>0)
	{
	
		for(int i=j;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		x--;
		j++;
	}
}
