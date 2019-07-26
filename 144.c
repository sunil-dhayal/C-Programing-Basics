#include<stdio.h>
void main()
{char s[50],a;int i;
 printf("enter your sentence\n");
 gets(s);
 printf("enter replacer character");
 scanf("%c",&a);
 for(i=0;s[i]!='\0';i++)
s[i]=a;

puts(s);

}
