#include<stdio.h>
#include<math.h>
void bubble_sort(int x[],int N);
void main()
{ int x[10],y[10],a,b,c,d,e=0;
  for(a=0;a<=9;a++)
  { printf("enter x and y coordinates of %d point",a+1);
    scanf("%d %d",&x[a],&y[a]);
  }
bubble_sort(x,9);bubble_sort(y,9);
for(d=0;d<=8;d++)
{b=(x[d+1]-x[d])*(x[d+1]-x[d])+(y[d+1]-y[d])*(y[d+1]-y[d]);
c=pow(b,.5);
e=e+c;
}printf("distance between points is %d",e);
}
bubble_sort(int x[],int N)
{ int a,b,temp;
    for(a=1;a<=N-1;a++)
    {for(b=0;b<=N-1-a;b++)
    {  if(x[b]>x[b+1])
    {  temp=x[b];
       x[b]=x[b+1];
       x[b+1]=temp;

    }






    }}


return;



}
