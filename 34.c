#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter total calls");
	scanf("%d",&a);
	if(a<=100)
	{
		printf("call charges are RS. 0");
	}
	else if(a<=200)
	{b=1.5*(a-100);
		printf("call charges are %d",b);
	}
	else if(a<=400)
	{c=100+2.5*(a-200);
		printf("call charges are %d",c);
	}
	else
	{d=600+3.5*(a-400);
		printf("call charges are %d",d);
	}
	return 0;
}
