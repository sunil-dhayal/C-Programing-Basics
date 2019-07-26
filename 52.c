#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three sides of tringle\n");
	scanf("%d%d%d",&a,&b,&c);
	((a+b>c) && (a+c>b) && (c+b>a))?printf("triangle is valid"):printf("triangle is not valid");
}
