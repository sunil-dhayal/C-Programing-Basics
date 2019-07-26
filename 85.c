#include<stdio.h>
void main()
{
int n,i,j,a=1;
printf("Enter number of lines\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=(n+1)-i;j++&&a++)
printf("%d",a%10);
printf("\n");
}
}
