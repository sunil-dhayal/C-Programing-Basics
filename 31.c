#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	printf("enter length and breadth of a rectangle");
	scanf("%d%d",&a,&b);
	int area=a*b;
	int perimeter=2*(a+b);
	if(area>perimeter)
	{
		printf("area=%d perimeter=%d",area,perimeter);
	}
	return 0;
}
