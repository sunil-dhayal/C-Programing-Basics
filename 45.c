#include<stdio.h>
int main()
{
	int a;
	printf("1.customer order is less than or equal to that in stock and has credit is OK\n");
	printf("2.credit is not OK\n");
	printf("3.credit is Ok but the item in stock is less than has order\n");
	printf("enter result");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("supply has requirement\n");
		break ;
		case 2:
		printf("intimation to customer\n");
		break ;
		case 3:
		printf("supply what is in stock and Intimate to customer data the balance will be shipped\n");
	}
	return 0;
}
