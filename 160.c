#include<stdio.h>
#include<string.h>
void main()
{ char name[5][10]={"HARI","RAM","SHYAM","SAM","ARPIT"},temp[10];
  int r,c,i,a;
  for(r=1;r<=4/*n-1*/;r++)
  {for(c=0;c<=4-r;c++)
  {i=strcmp(name[c],name[c+1]);
   if(i>0)
   {strcpy(temp,name[c]);
    strcpy(name[c],name[c+1]);
    strcpy(name[c+1],temp);
   }
  }
}
for(a=0;a<=4;a++)
    printf("%s ",name[a]);
}
