#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter a number\n");
	scanf("%d",&n);
	for(;n>0;n--)
	{
	i=i*n;
	}
	printf("factorial is %d",i);
}
