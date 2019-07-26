#include<stdio.h>
#include<math.h>

void main()
{ char s1[10];
  int i,j,k=1;
printf("enter number\n");
gets(s1);

for(i=0;s1[i]!='\0';i++)
{
}printf("%d %d",i,s1[4]);
for(j=0;j<=i-1;j++)
k=k+(s1[j]-48)*pow(10,i-j-1);

printf("\n%d",k);


}
