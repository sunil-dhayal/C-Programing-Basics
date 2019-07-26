#include<stdio.h>
void main()
{
	int n,i,a,b,c,d;

        for(i=1;i<=500;i++)
	{
		n=i;
		a=n/100;
		n=n%100;
		b=n/10;
		n=n%10;
		c=n;
		d=(a*a*a)+(b*b*b)+(c*c*c);
		if(i==d)
		printf("%d \n",i);
	}
}
