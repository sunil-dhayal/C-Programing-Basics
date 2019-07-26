#include<stdio.h>
void main()
{ int mat[4][4],mat_trans[4][4],a,b,c,x=1,d;
    for(a=0;a<=3;a++)
    {for(b=0;b<=3;b++)
      {mat[a][b]=x;
      x++;
      }}
   for(a=0;a<=3;a++)
    {for(b=0;b<=3;b++)
      {mat_trans[a][b]=mat[b][a];

      }}
   for(a=0;a<=3;a++)
    {printf("\n");
    for(b=0;b<=3;b++)
      {printf("%d ",mat_trans[a][b]);

      }}

}
