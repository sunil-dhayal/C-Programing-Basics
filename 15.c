#include<stdio.h>
int main()
{
	int a=10,b=20;
	b=a;
	a=a+b;
	printf("a is %d\n",a);
	printf("b is %d\n",b);
	return 0;
}
