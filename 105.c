#include<stdio.h>
void main()
{
int a,b;
printf("enter the two numbers ");
scanf("%d %d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("swap values are a=%d b=%d",a,b);
}
