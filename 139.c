#include<stdio.h>
void main()
{
int d1=01,m1=01,y1=1900,d2=01,m2,y2,a,b,c,d,m,e;

printf("\nEnter Dates(mm/yyyy)");
scanf("%d %d",&m2,&y2);
a=0;

while(y1<=y2)
{ if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
{ a=a+31;m1++;if(m1==m2&&y1==y2) break;
}
if(m1==2)
{ if(y1==1900||y1%4!=0)a=a+28;
  if(y1%4==0&&y1!=1900)a=a+29;
m1++;if(m1==m2&&y1==y2)break;}
if(m1==4||m1==6||m1==9||m1==11)
{
a=a+30;m1++;
if(m1==m2&&y1==y2)break;}
if(m1==13)
{m1=1;y1++;if(m1==m2&&y1==y2)break;}

}
printf("%d\n",a);
c=a%7;printf("%d ",c);
if(m2==1)printf("JANUARY");if(m2==2)printf("FEBRUARY");if(m2==3)printf("MARCH");if(m2==4)printf("APRIL");if(m2==5)printf("MAY");if(m2==6)printf("JUNE");
if(m2==7)printf("JULY");if(m2==8)printf("AUGUST");if(m2==9)printf("SEPTEMBER");if(m2==10)printf("OCTOBER");if(m2==11)printf("NOVEMBER");if(m2==12)printf("DECEMBER");

printf("  %d  \n",y2);
printf("MON TUE WED THU FRI SAT SUN\n");

if(m2==1||m2==3||m2==5||m2==7||m2==8||m2==10||m2==12)m=31;
if(m2==4||m2==6||m2==9||m2==11)m=30;
if(m2==2&&y2%4==0)
{if(y1%4==0) m=29;
if(y1%4!=0) m=28;}

 for(e=c;e>0;e--)
 printf("    ");
 {for(d=1;d<=m;d++)
  {if(d<=9)printf("%d   ",d);
  else if(d>9)printf("%d  ",d);
  
  if((c+d)%7==0)printf("\n");}



}


}
