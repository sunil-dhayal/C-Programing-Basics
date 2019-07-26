#include<stdio.h>
void main()
{
int n,i=1,j,a,p;
printf("Enter number of Row\n");
scanf("%d",&n);
while(i<=n)
{
p=i%2;
if(p!=0)
{
a=2;
j=1;
while(j<=i)
{
printf("%d",a%2);
j++;
a++;
}
}
else
{
a=1;
j=1;
while(j<=i)
{
printf("%d",a%2);
j++;
a++;
}
}
printf("\n");
i++;
}
}
