include<stdio.h>
int main()
{
	int a;
	printf("enter a year");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("year is leap year");
		}
	else
	{
		printf("year is aleap");
		}
	return 0;
}
