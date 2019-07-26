#include<stdio.h>
int main()
{
	int a,b=0,i;
	printf("enter a integer") ;
	scanf("%d",&a);
	i=a;
	for(;a>0;a=a/10)
	{
		b=b*10+(a%10);
	}
	(b==i)?printf("number is palindrome"):printf("number is not palindrome");
}
