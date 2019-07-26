#include<stdio.h>
void main()
{ char s[5][20]; int i,j,k,l,a=0;
for(i=0;i<=4;i++){
printf("enter names\n %d",i+1);
gets(s[i]);

}

for(i=0;i<=4;i++){
for(j=0;s[i][j]!='\0';j++){
   printf("%c.",s[i][0]);
   if(s[i][j]=' ')
   { for(k=j+1;s[i][k]!='\0';k++)
       {if(s[i][j]!=' ')break;}
   }
   for(k=j+1;s[i][k]!='\0';k++)
        printf("%c",s[i][k]);
}




}}
