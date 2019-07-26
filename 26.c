#include<stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3,m1,m2;
	printf("enter six numbers");
	scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
	m1=(y2-y1)/(x2-x1);
	m2=(y3-y1)/(x3-x1);
	if(m1==m2)
	{
		printf("all the three points are fall on a straight line");
		}
	else
	{
		printf("all the three points are not falls on a straight line");
		}
	return 0;	
}
