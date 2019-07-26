#include<stdio.h>
void main()
{
int n,i,j,a=1,p;
printf("Enter number of lines\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
p=i%2;
if(p!=0)
{
a=2;
for(j=1;j<=i;j++&&a++)
printf("%d",a%2);
}
else
{
a=1;
for(j=1;j<=i;j++&&a++)
printf("%d",a%2);
}
printf("\n");
}
}
