#include<stdio.h>
void main()
{ int arr[25],search,a=0,b,c=0;
  printf("enter the elements");
  while(a<=24)
  {scanf("%d",&arr[a]);a++;}

  printf("\nsearch number");
  scanf("%d",&search);
  for(b=0;b<=24;b++)
{  if(search==arr[b])
   c++;




}
if(c!=0)
    printf("\n number found and its %d times in array",c);

}
