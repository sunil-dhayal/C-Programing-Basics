#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter total calls");
	scanf("%d",&a);
	if(a<=150)
	{
		printf("call charges are RS. 0");
	}
	else if(a<=250)
	{b=0.9*(a-150);
		printf("call charges are %d",b);
	}
	else if(a<=400)
	{c=90+1.2*(a-250);
		printf("call charges are %d",c);
	}
	else
	{d=270+1.5*(a-400);
		printf("call charges are %d",d);
	}
	return 0;
}
