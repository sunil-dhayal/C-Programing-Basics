#include<stdio.h>
void main()
{
int l,b,r,area1,perimeter;
float area2,circum;
printf("\n Enter length and breadth of rectangle");
scanf("%d%d",&l,&b);
area1=l*b;
perimeter=2*l+2*b;
printf("\n  Area of Rectangle=%d",area1);
printf("\n Perimeter of Rectangle=%d",perimeter);
printf("\nEnter Radius of circle");
scanf("%d",&r);
area2=3.14*r*r;
circum=2*3.14*r;
printf("Area of circle=%f",area2);
printf("\n circumference of circle=%f",circum);
}
