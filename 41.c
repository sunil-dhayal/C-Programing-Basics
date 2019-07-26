#include <stdio.h>
int main ()
{
	char ch;
	int a;
	printf("Enter the character \n");
	scanf("%c",&ch);
	a=ch;
	if(a>=65&&a<=90)
	{
		printf("Character is capital letter \n");
	}
	else if(a>=97&&a<=122)
	{
		printf("Character is small letter \n");
	}
	else if(a>=48&&a<=57)
	{
		printf("Character is digit \n");
	}
	else if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
	{
		printf("Character is special symbol \n");
	}
	return 0;
}
