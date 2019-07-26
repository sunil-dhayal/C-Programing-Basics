//SELECTION SORT
#include<stdio.h>

void main()
{ int A[]={22,11,33,44};  int k,temp,LOC,p;

  for(k=0;k<=2/*N-2*/;k++)
  {
  LOC=min(A,k,2/*N*/);
  temp=A[k];
  A[k]=A[LOC];
  A[LOC]=temp;
  }
for(p=0;p<=3;p++)
printf("%d ",A[p]);



}
min(int A[],int k,int N)
{ int  MIN,LOC,j;
  MIN=A[k];
  LOC=k;
  for(j=k+1;j<=N-1;j++)
  { if(MIN>A[j])
        {MIN=A[j];
        LOC=j;}
        }

return(LOC);
}
