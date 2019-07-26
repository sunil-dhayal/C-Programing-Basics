#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g;
	printf("enter amount to be withdrawn");
	scanf("%d",&g);
	a=g/100;
	g=g%100;
	b=g/50;
	g=g%50;
	c=g/10;
	g=g%10;
	d=g/5;
	g=g%5;
	e=g/2;
	g=g%2;
	f=g/1;
	printf("notes of 100 is %d\n",a);
	printf("notes of 50 is %d\n",b);
	printf("notes of 10 is %d\n",c);
	printf("coins of 5 is %d\n",d);
	printf("coins of 2 is %d\n",e);
	printf("coins of 1 is %d\n",f);
	}
