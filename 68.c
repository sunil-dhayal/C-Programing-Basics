#include<stdio.h>
 int main()
{
    float x,y,i;
    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<13;x=x+0.5)
           {
            i=2+(y+0.5*x);
            printf("x is %f, y is %f and i is%f\n",x,y,i);
           }
    }
}
