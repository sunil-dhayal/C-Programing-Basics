#include<stdio.h>
void main()
{
int n,i=1,j=1;
printf("Enter number of lines\n");
scanf("%d",&n);
while(i<=n)
{
j=1;
while(j<=n+1-i)
{
printf("*");
j++;
}
i++;
printf("\n");
}
}
