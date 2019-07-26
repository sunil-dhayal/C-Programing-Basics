#include<stdio.h>
void main()
{ char s[80],s1[80]; int i,j=0;
  printf("enter your thing");
  gets(s);
  for(i=0;s[i]!='\0';i++)
  { if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')
    {s1[j]=s[i];j++;

  }}
s1[j]='\0';
puts(s1);

}
