#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three angles of tringle");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180 && 0<a<180 && 0<b<180 && 0<c<180)
	{
		printf("three angles are a tringle angles");
	}
	else
	{
		printf("three angles are not a tringle angles");
	}
	return 0;
}
