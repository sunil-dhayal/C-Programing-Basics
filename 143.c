#include<stdio.h>
void main()
{ char str[50],a[10];
  int i,j;
    printf("enter your sentence\n");
    gets(str);
    printf("enter the character");
    scanf("%s",a);
    for(i=1;i<=49;i++)
    { if(str[i]==a[0]&&str[i+1]==a[1]&&str[i+2]==a[2]&&str[i+3]==a[3])
       {printf("%s IS FOUND FROM %d ONWARDS in string at first time",a,i+1);break;}
    }






}
