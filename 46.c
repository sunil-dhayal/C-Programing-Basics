#include<stdio.h>
int main()
{
	int ch;
	printf("enter a character\n");
	scanf("%c",&ch);
	int b=ch;
	(b<=122 && b>=97)?printf("character is a lower case alphabet\n"):printf("character is not a lower case alphabet\n");
	((b>=0&&b<=47)||(b>=58&&b<=64)||(b>=91&&b<=96)||(b>=123&&b<=127))?printf("character is a special symbol\n"):printf("character is not a special symbol\n");
	
}
