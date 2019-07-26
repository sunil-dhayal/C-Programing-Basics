#include<stdio.h>
void main()
{
int n,i=1,j,a=1;
printf("Enter number of row\n");
scanf("%d",&n);
while(i<=n)
{
j=1;
while(j<=n+1-i)
{
printf("%d",a%10);
j++;
a++;
}
printf("\n");
i++;
}
}
