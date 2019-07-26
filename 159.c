#include<stdio.h>
void main()
{ char s[50],s1[50];int i,j=0,k;
  printf("enter");
  fgets(s,50,stdin);/*in gcc gets seems to be dangerous*/ 
  for(i=0;s[i]!='\0';i++)
  { if(s[i]!=' '||(s[i]==' '&&s[i+1]!=' '))
    {s1[j]=s[i];j++;}

}s1[i]='\0';
puts(s1);









}
