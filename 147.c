#include<stdio.h>
void main()
{ char s[50]="MY NAME IS KHAN";
  int i,j=0;
  for(i=0;s[i]!='\0';i++)
  {if(s[i]==' ')j++;

  }
printf("NUMBER OF WORDS ARE %d",j+1);
}
