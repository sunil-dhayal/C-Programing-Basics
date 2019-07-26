#include<stdio.h>
struct bank
{ int ano;
  float bal;
  char name[20];
};
void main()
{ struct bank cust[200];
  int a,i,j,k,l;
  char s[20];
printf("\nNUMBER OF ACCOUNTS");
scanf("%d",&a);
for(i=0;i<a;i++)
{printf("Account number of C%d",i+1);
scanf("%d",&cust[i].ano);
printf("Name of C%d",i+1);fflush(stdin);
gets(cust[i].name);
printf("Balance of C%d",i+1);
scanf("%f",&cust[i].bal);}

for(i=0;i<a;i++)
{ if(cust[i].bal<100)
   {   printf("CUSTOMERS WHOM BAL IS LESS THAN RS100");
       printf("Account number=%d  ",cust[i].ano);
       printf(" Name=%s\n",cust[i].name);
   }
}

printf("\n1.CASH WITHDRAWL\N2.CASH DEPOSIT\n");
scanf("%d",&j);
switch(j){
case 1:{ printf("enter Account no and Name");
         scanf("%d %s",&k,&s);
   for(i=0;i<a;i++)
   { if(k==cust[i].ano)
     {printf("\n enter amount to withdraw");
       scanf("%d",&l);
       cust[i].bal=cust[i].bal-l;
       if(cust[i].bal<0)printf("\ninsufficient balance");
       else if(cust[i].bal>0)printf("\nRemaining balance=%d ",cust[i].bal);
       }
   }

}break;
case 2:{ printf("enter Account no and Name");
         scanf("%d %s",&k,&s);
   for(i=0;i<a;i++)
   { if(k==cust[i].ano)
     {printf("\n enter amount to deposit");
       scanf("%d",&l);
       cust[i].bal=cust[i].bal+l;
     printf("\nAvailable balance=%d ",cust[i].bal);
       }
   }

}




}





}
