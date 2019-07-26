#include<stdio.h>
#include<math.h>
void main()
{int x1,x2,y1,y2;
float d,a,b,c;
printf("Enter coordinates");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
a=pow(x1-x2,2);
b=pow(y1-y2,2);
c=a+b;
d=pow(c,0.5);
printf("distance between 2 points is %f",d);
}
