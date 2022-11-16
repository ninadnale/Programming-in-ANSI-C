#include<stdio.h>

void main()
{
	int count=0;
	char key;
	char text[50] = "Hi, how are you? I am fine. What about you?";
	
	printf("Enter the desired character : ");
	scanf("%c",&key);
	
	int i=0;
	while(text[i] != '\0')
	{
		if(key == text[i])
			count++;
		i++;
	}
	
	printf("\nThe letter occurs %d times in given text.\n",count);
	
}
