#include<stdio.h>
void main()
{ char s1[50]="MY NAME IS KHAN",s2[50];
  int i,n,j;
  printf("enter number\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  s2[i]=s1[i];

for(j=0;j<n;j++)
printf("%c",s2[j]);

}
