#include<stdio.h>
void main()
{ int a,b,c,d,e;
printf("enter the number\n");
scanf("%d",&a);
b=a%10;
   c=((a-b)%100)/10;
   d=((a-(10*c+b))%1000)/100;

   if(d==0)printf("ZERO ");
   else if(d==1)printf("ONE ");
   else if(d==2)printf("TWO ");
   else if(d==3)printf("THREE ");
   else if(d==4)printf("FOUR ");
   else if(d==5)printf("FIVE ");
   else if(d==6)printf("SIX ");
   else if(d==7)printf("SEVEN ");
   else if(d==8)printf("EIGHT ");
   else if(d==9)printf("NINE ");

    if(c==0)printf("ZERO ");
   else if(c==1)printf("ONE ");
   else if(c==2)printf("TWO ");
   else if(c==3)printf("THREE ");
   else if(c==4)printf("FOUR ");
   else if(c==5)printf("FIVE ");
   else if(c==6)printf("SIX ");
   else if(c==7)printf("SEVEN ");
   else if(c==8)printf("EIGHT ");
   else if(c==9)printf("NINE ");

    if(b==0)printf("ZERO ");
   else if(b==1)printf("ONE ");
   else if(b==2)printf("TWO ");
   else if(b==3)printf("THREE ");
   else if(b==4)printf("FOUR ");
   else if(b==5)printf("FIVE ");
   else if(b==6)printf("SIX ");
   else if(b==7)printf("SEVEN ");
   else if(b==8)printf("EIGHT ");
   else if(b==9)printf("NINE ");    }
