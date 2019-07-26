#include<stdio.h>
void main()
{ int n;
printf("enter number of elements");
scanf("%d",&n);
int arr[n],a;
printf("\nenter elements");
for(a=0;a<=n-1;a++)
scanf("%d",&arr[a]);
for(a=0;a<=n-1;a++)
{ if(arr[a]==arr[n-1-a]);
  {if(a!=n-a-1)
   if(a<=(n)/2)
      printf("\nindex=%d and index=%d are equal",a,n-1-a);
  }




}


}
