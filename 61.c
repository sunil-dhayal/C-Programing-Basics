#include<stdio.h>
void main()
{
int i=1,no,p=0,n=0,z=0,a;
while(i==1)
{
printf("enter a no.");
scanf("%d",&no);
if(no>0)
p++;
if(no<0)
n++;
if(no==0)
z++;
printf("do you want to continue yes(1)/no(0):");
scanf("%d",&a);
if(a==1)
continue;
else
break;
}
printf("no. of times of positive no.,negative no. ,zeroes printed are %d, %d ,%d",p,n,z);
}
