#include<stdio.h>
void main()
{
int n=7,i,j,s=7,sp=0;
char c;
for(i=1;i<=n;i++)
{
c=65;
for(j=1;j<=s;j++)
{
printf("%c",c);
c=c+1;
}
for(j=1;j<=2*sp-1;j++)
{
printf(" ");
}
if(i==1)
{
c=c-2;
for(j=1;j<s;j++)
{
printf("%c",c);
c=c-1;
}
}
else
{
c=c-1;
for(j=1;j<=s;j++&&c--)
printf("%c",c);
}
printf("\n");
s--;
sp++;
}
}
