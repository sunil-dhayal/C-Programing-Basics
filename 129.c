#include<stdio.h>
void main()
{ int matrix[3][3],a,b,c=0,d=0,e=0;
printf("enter elements of 3*3 matrix");
for(a=0;a<=2;a++)
{for(b=0;b<=2;b++)
    scanf("%d",&matrix[a][b]);
}
  for(a=0;a<=2;a++)
{for(b=0;b<=2;b++)
   {    if(a!=b&&matrix[a][b]==0)
        c++;

        if(a>b&&matrix[a][b]==0)
        d++;
        if(a<b&&matrix[a][b]==0)
        e++;
}  }

   if(c==6) printf("\n Diagonal Matrix");
   if(d==3) printf("\n Lower Triangle Matrix");
   if(e==3) printf("\n Upper Triangle Matrix");



}
