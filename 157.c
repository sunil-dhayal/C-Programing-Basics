#include<stdio.h>
void main()
{ char s[50]="WHY WE ARE WRITING EVERYTHING IN NOTEBOOK";
  int i,j,k;
  puts(s);
 printf("\nenter position\nenter number of characters\n");
 scanf("%d %d",&i,&j);

 if(j==0)
 {for(k=i-1;s[k]!='\0';k++)
 printf("%c",s[k]);}

for(k=i-1;k<=i+j-2;k++)
 printf("%c",s[k]);}
