#include<stdio.h>
void main()
{ int arr[25],search,a=0;
  printf("enter the elements");
  while(a<=24)
  {scanf("%d",&arr[a]);a++;}

 int b,c=0,d=0,e;
 for(b=0;b<=24;b++)
 {if(arr[b]<0)c++;
  if(arr[b]>0)d++;
  if(arr[b]%2==0)e++;


 }
 printf("\n negative numbers are %d",c);
 printf("\n positive numbers are %d",d);
 printf("\n even numbers are %d",e);
 printf("\n odd numbers are %d",25-e);}
