#include<stdio.h>
void main()
{
int i,j,k,l;
for(i=1;i<1000;i++)
{
for(j=1;j<1000;j++)
    {
 for(k=1;k<1000;k++)
       {
  for(l=1;l<1000;l++)
         {
  if((i+j+k==l)&&i<j&&j<k&&k<l)
    printf("%d %d %d   %d\n",i,j,k,l);
         }
       }
    }
}
}
