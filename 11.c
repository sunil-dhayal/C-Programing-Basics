#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("enter a five digit number");
	scanf("%d",&a);
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	a=a/10;
	e=a%10;
	a=a/10;
	f=a%10;
	g=10000*b+1000*c+100*d+10*e+1*f;
	printf("the reverse number is %d",g);
	return 0;
}
