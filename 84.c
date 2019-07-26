#include<stdio.h>
void main()
{
int n,i,j,s=1,sp,p;
printf("Enter number of lines\n");
scanf("%d",&n);
p=n%2;
sp=(n+1)/2;
for(i=1;i<=n;i++)
{
for(j=1;j<=sp-1;j++)
{
printf(" ");
}
for(j=1;j<=2*s-1;j++)
{
printf("*");
}
if(i<n/2)
{
s=s+1;
sp=sp-1;
}
else if(i==n/2)
{
if(p!=0)
{
s=s+1;
sp=sp-1;
}
else
{}
}
else
{
s=s-1;
sp=sp+1;
}
printf("\n");
}
}
