#include<stdio.h>
void main()
{ int arr[100],x,a,b,c;
    for(x=0;x<=99;x++)
  arr[x]=x+1;

    for(a=2;a<=99;a++)
    { for(b=a;b>=2;b--)
        {  if(arr[a]%b==0)
            arr[a]=0;
        }
    }
printf("\nPrime Numbers b/w 1 and 100 are ");
for(c=0;c<=99;c++)
{ if(arr[c]!=0)
    printf(" %d ",arr[c]);
}





}
