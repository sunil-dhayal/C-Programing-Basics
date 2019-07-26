#include<stdio.h>
#include<math.h>
void main()
{ int a,b,c,d,e,i,j,k,l,m;

for(a=1000;a<=9999;a++)
 { b=a%10;
   c=((a-b)%100)/10;
   d=((a-(10*c+b))%1000)/100;
   e=((a-(100*d+10*c+b))%10000)/1000;
   l=(e*10)+d;
   m=(c*10)+b;
   i=sqrt(a);
   j=sqrt(l);
   k=sqrt(m);

if(i*i==a&&j*j==l&&k*k==m)
printf("%d ",a);


 }













}
