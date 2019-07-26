#include<stdio.h>
void main()
{ char str[50],a;
  int i,j;
    printf("enter your sentence\n");
    gets(str);
    printf("enter the character");
    scanf("%c",&a);
    for(i=1;i<=49;i++)
    { if(str[i]==a)
       j=i+1;
    }

printf("%c IS FOUND AT %d in string at last time",a,j);




}
