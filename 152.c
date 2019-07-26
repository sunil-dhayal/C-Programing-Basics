#include<stdio.h>
void main()
{ char s1[50],s2[50];int i,j,n;
  printf("enter sentence\n");
  gets(s1);
  printf("\nenter another sentence");
  gets(s2);
  printf("\nenter number of characters");
  scanf("%d",&n);

  for(j=n;s2[j-n]!='\0';j++)
    s1[j]=s2[j-n];

 for(i=0;i<=j-1;i++)
 printf("%c",s1[i]);
 }
