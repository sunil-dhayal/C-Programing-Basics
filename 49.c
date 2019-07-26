#include <stdio.h>
int main ()
{
	int ag;
	char h,l,g;
	printf("Enter M for male or F for female \n");
	scanf("%c",&g);
	printf("Enter E if health condition is excellent or P if health condition is poor \n");
	scanf("%c",&h);
	printf("Enter C if lives in city or V if lives in village \n");
	scanf("%c",&l);
	printf("Enter the age \n");
	scanf("%d",&ag);
	if(ag>=25&&ag<=35&&l=='C'&&g=='M'&&h=='E')
	{
		printf("The person is insured \nPremium is Rs 4 per thousand \nThe policy amount cannot exceed Rs. 2 lakhs \n");
	}
	else if(ag>=25&&ag<=35&&l=='C'&&g=='F'&&h=='E')
	{
		printf("The person is insured \nPremium is Rs 3 per thousand \nThe policy amount cannot exceed Rs. 1 lakhs \n");
	}
	else if(ag>=25&&ag<=35&&l=='V'&&g=='M'&&h=='P')
	{
		printf("The person is insured \nPremium is Rs 6 per thousand \nThe policy amount cannot exceed Rs. 10,000 \n");
	}
	else
	{
		printf("The person is not insured \n");
	}
	return 0;
}

