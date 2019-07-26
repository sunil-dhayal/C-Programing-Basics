/*pascal triangle*/
#include<stdio.h>
void main()
{ int a,b,c,n;
printf("enter number");
scanf("%d",&n);
  for(a=0;a<=n-1;a++)
  { printf("\n");
  for(b=a+1;b<=n-1;b++)
      printf(" ");
  for(c=0;c<=a;c++)
  {printf("%d ",fact(a)/(fact(c)*fact(a-c)));

  }




  }

}
int fact(int n)
{ int r,f=1;
    for(r=n;r>=1;r--)
 f=f*r;
   return f;
}
