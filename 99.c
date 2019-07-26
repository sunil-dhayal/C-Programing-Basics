#include<stdio.h>
void main()
{
int n=7,i,j,s,sp=1;
s=n/2;
for(i=1;i<=n;i++)
{
for(j=1;j<sp;j++)
printf(" ");
for(j=1;j<=2*s+1;j++)
printf("*");
for(j=1;j<sp;j++)
printf(" ");
if(i<=n/2)
{
s=s-1;
sp=sp+1;
}
else
{
s=s+1;
sp=sp-1;
}
printf("\n");
}
}
