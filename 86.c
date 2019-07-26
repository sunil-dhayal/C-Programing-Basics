#include<stdio.h>
void main()
{
int n,i,j,s=1,sp,a=1,p;
printf("Enter number of lines\n");
scanf("%d",&n);
sp=(n+1)/2;
p=n%2;
for(i=1;i<=n;i++)
{
for(j=1;j<=sp-1;j++)
{
printf(" ");
}
for(j=1;j<=2*s-1;j++&&a++)
printf("%d",a%10);
if(i<n/2)
{
s=s+1;
sp=sp-1;
}
else if(i==n/2)
{
if(p==0)
{
}
else
{
s=s+1;
sp=sp-1;
}
}
else
{
s=s-1;
sp=sp+1;
}
printf("\n");
}
}

