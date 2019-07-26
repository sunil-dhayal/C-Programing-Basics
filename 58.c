#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the coordinates of point");
	scanf("%d%d",&a,&b);
	if(a==0&&b==0)
	printf("origin");
	else if(a==0&&b!=0)
	printf("y axis");
	 else if(a!=0&&b==0)
	printf("x axis");
	else
	printf("not on axis");
}
