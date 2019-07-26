#include<stdio.h>
void main()
{ int a,b,c,d,e,f,g;
printf("enter number");
scanf("%d",&a);
b=a%10;
   c=((a-b)%100)/10;
   d=((a-(10*c+b))%1000)/100;
   e=((a-(100*d+10*c+b))%10000)/1000;

   if(e==1)printf("ONE THOUSAND ");
   else if(e==2)printf("TWO THOUSAND ");
   else if(e==3)printf("THREE THOUSAND ");
   else if(e==4)printf("FOUR THOUSAND ");
   else if(e==5)printf("FIVE THOUSAND ");
   else if(e==6)printf("SIX THOUSAND ");
   else if(e==7)printf("SEVEN THOUSAND ");
   else if(e==8)printf("EIGHT THOUSAND ");
   else if(e==9)printf("NINE THOUSAND ");

   if(d==1)printf("ONE HUNDRED ");
   else if(d==2)printf("TWO HUNDRED ");
   else if(d==3)printf("THREE HUNDRED ");
   else if(d==4)printf("FOUR HUNDRED ");
   else if(d==5)printf("FIVE HUNDRED ");
   else if(d==6)printf("SIX HUNDRED ");
   else if(d==7)printf("SEVEN HUNDRED ");
   else if(d==8)printf("EIGHT HUNDRED ");
   else if(d==9)printf("NINE HUNDRED ");


   if(c==1&&b==0)printf("TEN ");
   else if(c==1&&b==1)printf("ELEVEN ");
   else if(c==1&&b==2)printf("TWELVE ");
   else if(c==1&&b==3)printf("THIRTEEN ");
   else if(c==1&&b==4)printf("FOURTEEN ");
   else if(c==1&&b==5)printf("FIFTEEN ");
   else if(c==1&&b==6)printf("SIXTEEN ");
   else if(c==1&&b==7)printf("SEVENTEEN ");
   else if(c==1&&b==8)printf("EIGHTEEN ");
   else if(c==1&&b==9)printf("NINETEEN ");
   else if(c==2&&b==0)printf("TWENTY ");


   if(c==2)printf("TWENTY ");
   else if(c==3)printf("THIRTY ");
   else if(c==4)printf("FOURTY ");
   else if(c==5)printf("FIFTY ");
   else if(c==6)printf("SIXTY ");
   else if(c==7)printf("SEVENTY ");
   else if(c==8)printf("EIGHTY ");
   else if(c==9)printf("NINETY ");


   if(b==1)printf("ONE ");
   else if(b==2)printf("TWO ");
   else if(b==3)printf("THREE ");
   else if(b==4)printf("FOUR ");
   else if(b==5)printf("FIVE ");
   else if(b==6)printf("SIX ");
   else if(b==7)printf("SEVEN ");
   else if(b==8)printf("EIGHT ");
   else if(b==9)printf("NINE ");    }

