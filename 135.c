#include<stdio.h>
void main()
{ int marks[10],a;float b=0;
printf("ENTER MARKS\n");
for(a=0;a<=9;a++)
    scanf("%d",&marks[a]);

  for(a=0;a<=9;a++)
    b=(b+marks[a]);

   printf("\naverage marks=%.01f",b/10);





}
