#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	printf("enter a five digit number");
	scanf("%d",&f);
	a=f%10;
	f=f/10;
	b=f%10;
	f=f/10;
	c=f%10;
	f=f/10;
	d=f%10;
	f=f/10;
	e=f%10;
	f=(e+1)*10000+(d+1)*1000+(c+1)*100+(b+1)*10+(a+1)*1;
	printf("new number by adding one in each is %d",f);
	}
