#include<stdio.h>
void main()
{char s[50],a;int i,j,k;
 printf("enter your sentence\n");
 gets(s);
 printf("enter replacer character and enter value of n");
 scanf("%c %d",&a,&j);
 for(i=0,k=1;(s[i]!='\0')&&(k<=j);i++,k++)
 s[i]=a;

puts(s);

}
