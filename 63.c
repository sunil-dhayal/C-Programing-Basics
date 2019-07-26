#include<stdio.h>
void main()
{
int num,a[50],max,min,i,r;
printf("Enter how many no u want to take");
scanf("%d",&num);
for(i=0;i<=num;i++)
{
printf("enter %d number",i+1);
scanf("%d",&a[i]);
}
max=a[0];
for(i=1;i<num;i++)
{
if(a[i]>max)
max=a[i];
}
min=a[0];
for(i=1;i<num;i++)
{
if(a[i]<min)
min=a[i];
}
r=max-min;
printf("range is %d",r);
}
