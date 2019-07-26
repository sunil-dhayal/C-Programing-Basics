#include<stdio.h>
void main()
{
int n,i=1,j,p,s=1,sp;
printf("Enter number of lines\n");
scanf("%d",&n);
p=n%2;
sp=(n+1)/2;
while(i<=n)
{
j=1;
while(j<=sp-1)
{
printf(" ");
j++;
}
j=1;
while(j<=s)
{
printf("*");
j++;
}
printf("\n");
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
{
}
}
else
{
s=s-1;
sp=sp+1;
}
i++;
}
}
