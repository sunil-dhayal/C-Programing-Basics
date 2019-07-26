#include<stdio.h>
int main()
{
	int SP,TP,CP;
	float CP1;
	printf("enter SP and TP");
	scanf("%d%d",&SP,&TP);
	CP=SP-TP;
	CP1=CP/15;
	printf("cost price of one piece is %f",CP1);
	return 0;
}
