#include<stdio.h>

void main()
{
	int a[100],n;
	int fc=0,sc=0,tc=0,fail=0;
	
	printf("Enter number of entries : ");
	scanf("%d",&n);
	
	printf("Enter marks :");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>80)
		{
			fc++;
		}
		else if(a[i]>60)
		{
			sc++;
		}
		else if(a[i]>40)
		{
			tc++;
		}
		else
		{
			fail++;
		}
	}
	
	printf("\nFirst Class : %d\nSecond Class : %d\nThird Class : %d\nFail : %d\n",fc,sc,tc,fail);
	
}
