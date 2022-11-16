#include<stdio.h>

void main()
{
	int count=0,sb=0,n;
	int ballots[] = {1, 3, 5, 4, 1, 4, 5, 3, 2, 1, 3, 4, 2, 1, 4, 4, 5, 6, 4, 5, 6, 5, 5, 6, 1, 7, 8, 3, 12, 4};
	int candidate[6];
	
	for(int i=1;i<=5;i++)
		candidate[i] = 0;
	
	
	n = sizeof(ballots)/4;
	for(int i=0;i<n;i++)
	{
		if(ballots[i]>=1 && ballots[i]<=5)
			candidate[ballots[i]]++;
		else
			sb++;
	}
	
	printf("\n*********STATISTICS*********\n");
	printf("\n\tTotal Ballots -> %d \n\tValid Ballots -> %d \n\tSpoiled Ballots -> %d\n",n,n-sb,sb);
	
	printf("\n*****RESULTS*****\n");
	for(int i=1;i<=5;i++)
		printf("\n     %d -> %d",i,candidate[i]);
	printf("\n");
	
}
