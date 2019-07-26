#include<stdio.h>
void main()
{ char s[50]="MY NaMe Is KhAn";
  int i;

  for(i=0;s[i]!='\0';i++)
  {if(s[i]<91&&s[i]>64)
   s[i]=s[i]+32;

  }puts(s);
}
