#include<stdio.h>
#include<math.h>
void main()
{ float p,r,q,n,num,c;float amount,b,d;
for(num=1;num<=10;num++)
{ printf("\nenter\n1).principle amount\n2).rate\n3).years\n4).times per year interest compunded\n");
  scanf("%f %f %f %f",&p,&r,&n,&q);
  c=n*q;
  b=((1+r/q));
  d=pow(b,c);
  amount=d*p;
printf("amount is %f\n",amount);

}






}
