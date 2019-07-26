#include<stdio.h>
void main()
{
int i,n,r,s=0;;
printf("enter 5 digit number");
scanf("%d",&n);
for (i=1;i<=5;i++)
{r=n%10;
s=s+r;
n=n/10;
}
printf("Sum is %d",s);
}
