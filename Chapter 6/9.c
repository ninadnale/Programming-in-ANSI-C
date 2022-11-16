#include<stdio.h>

void main()
{
	int x,y,ch;
	
	printf("Enter value of x : ");
	scanf("%d",&x);
	
	printf("\nMENU : \n\t1. Using nested 'if' \n\t2. Using else-if \n\t3. Using coditional operator\nEnter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
		/*USING nested if*/
			if(x<0)
				y = 1;
			if(x>0)
				y = -1;
			if(x==0)
				y = 0;
			break;
		
		case 2:
		/*USING else-if*/
			if(x<0)
				y = 1;
			else if(x>0)
				y = -1;
			else
				y = 0;
			break;
		
		case 3:
		/*USING conditional operator ?:*/
		if(x==0)
			y=0;
		else
			y = (x>0)?1:-1;
		break;
	}
	
	printf("y = %d\n",y);

}
