#include<stdio.h>
void main ()
{
int me,mh,mm,mc,mp;
float per,avg;
printf("Enter marks of English,Hindi,Maths, Chemistry and Physics \n");
scanf("%d",&me);
scanf("%d",&mh);
scanf("%d",&mm);
scanf("%d",&mc);
scanf("%d",&mp);
avg=(me+mh+mm+mc+mp)/5;
per=(me+mh+mm+mc+mp)*100/500;
printf("The average marks is %f and pecentage is %f %",avg,per);
}
