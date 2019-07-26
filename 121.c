#include<stdio.h>
void main()
{ int mat[5][5],a,b,c,x=1,d;
    for(a=0;a<=4;a++)
    {for(b=0;b<=4;b++)
      {mat[a][b]=x;
      x++;
      }}
    d=mat[0][0];
   for(a=0;a<=4;a++)
    {for(b=0;b<=4;b++)
      { if(d<=mat[a][b])
        d=mat[a][b];}
        }
printf("\nlargest value among this matrix is %d ",d);






}
