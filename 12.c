#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter a four digit number");
	scanf("%d",&a);
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	a=a/10;
	e=a%10;
	f=e+b;
	printf("the reverse number is %d",f);
	return 0;
}
