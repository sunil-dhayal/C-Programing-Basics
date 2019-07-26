#include<stdio.h>
void main()
{
 int y,n,p;
 printf("enter year");
 scanf("%d",&y);
n = (y-1900)/4 ;
 p=1+(y-1900 +n)%7;
 if(p==1)
  printf("monday");
  if(p==2)
  printf("tuesday");
 if(p==3)
  printf("wednesday");
 if(p==4)
  printf("thursday");
 if(p==5)
  printf("friday");
 if(p==6)
  printf("saturday");
 if(p==7)
  printf("sunday");
}
