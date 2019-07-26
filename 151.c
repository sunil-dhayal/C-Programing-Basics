#include<stdio.h>
void main()
{ char s1[50],s2[50];int i,j;
  printf("enter sentence\n");
  gets(s1);
  printf("\nenter another sentence");
  gets(s2);
  for(i=0;s1[i]!='\0';i++)
  {
  }
  for(j=i;s2[j-i]!='\0';j++)
    s1[j]=s2[j-i];

 for(i=0;i<=j-1;i++)
 printf("%c",s1[i]);
 }
