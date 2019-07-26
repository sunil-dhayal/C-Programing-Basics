#include<stdio.h>
void main()
{
int x,y,n=21;
printf("Total amount of matchsticks is 21");
while(n>1)
{
printf("\nenter your choice=");
scanf("%d",&x);
if(1<=x&&x<=4)
{
n=n-x;
printf("\nuser picks %d,matchstick left=%d",x,n);
}
else
{
printf("\nwrong entry");
break;
}
y=5-x;
n=n-y;
printf("\ncomputer picks %d,matchstick left=%d",y,n);
}
if(n==1)
printf("\n last matchstick left,\nYOU LOSE");
}
