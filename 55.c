#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	d=a;
	e=b;
	while(b!=0)
	{
		c=b;
		b=a%b;
		a=c;
	}
	int hcf=a;
	int lcm=(d*e)/hcf;
	printf("hcf=%dlcm=%d",hcf,lcm);
}
