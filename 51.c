#include<stdio.h>
int main()
{
	int a;
	float charge;
	printf("enter the number of days in which candidate return the book");
	scanf("%d",&a);
	if(a<=5)
	{charge=(0.5)*a;
	printf("charge is %f",charge);}
	else if(a>=6 && a<=10)
	{charge=(2.5)+(1.0)*(a-5);
	printf("charge is %f",charge);}
	else if(a>10 && a<=30)
	{charge=(7.5)+(5.0)*(a-10);
	printf("charge is %f",charge);}
	else
	printf("the mambership of the candidate will cancelled");
}
