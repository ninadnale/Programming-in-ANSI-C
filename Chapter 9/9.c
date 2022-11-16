#include<stdio.h>

void main()
{
	float amt;
	int dec;
	float fract;
	
	char single[11][15] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	char dual[11][15] = {"Zero"," ","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninty"};
	char axe[11][15] = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Ninteen"};
	
	printf("Enter the amount in numbers : ");
	scanf("%f",&amt);
		
	int rs[5],ps[3];
	int div = 1000,i=0,a;
	dec = amt;
	fract = amt - dec;
	
	while(div>0)
	{
		rs[i] = dec/div;
		dec = dec%div;
		div = div/10;
		i++;
		
	}
	
	fract = fract*100;
	
	int frac = fract;
	div=10;
	int f=0;
	while(div>0)	
	{
		ps[f] = frac/div;
		frac = frac%div;
		div = div/10;
		f++;
	}
	
	i=0;
	int p=rs[i],q=rs[i+1],r=rs[i+2],s=rs[i+3];
	
	if(p>0)
		printf("%s Thousand ",single[p]);
	if(q>0)
		printf("%s Hundred and ",single[q]);
	if(r==2)
		printf("%s rupees\n",axe[s]);
	else if(r==1)
		printf("%s %s rupees\n",dual[r],single[s]);
	else
		printf("%s rupees\n",single[s]);
}
