#include<stdio.h>
void main()
{
int n,s=1,sp,i,j,p;
printf("Enter number of Row\n");
scanf("%d",&n);
p=n%2;
sp=(n+1)/2;
for(i=1;i<=n;i++)
{
for(j=1;j<=sp-1;j++)
{
printf(" ");
}
for(j=1;j<=s;j++)
{
printf("*");
}
printf("\n");
if(i<n/2)
{
sp=sp-1;
s=s+1;
}
else if(i==n/2)
{
if(p!=0)
{
s=s+1;
sp=sp-1;
}
else
{
}
}
else
{
s=s-1;
sp=sp+1;
}
}
}
