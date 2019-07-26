#include<stdio.h>
void main()
{ int a,b,c,d,e,f;
    for(a=1000;a<=9999;a++)
    { for(a=1000;a<=9999;a++)
 { b=a%10;
   c=((a-b)%100)/10;
   d=((a-(10*c+b))%1000)/100;
   e=((a-(100*d+10*c+b))%10000)/1000;
   if(b==c&&d==e)
        { f=sqrt(a);
         if(f*f==a)
            printf("%d ",a);
        }



    }




}}
