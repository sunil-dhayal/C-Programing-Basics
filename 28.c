#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		printf("greatest is %d",a);
	}
	else if(b>=a && b>=c)
	{
		printf("greatest is %d",b);
	}
	else
	{
		printf("greatest is %d",c);
	}
	return 0;	
}
