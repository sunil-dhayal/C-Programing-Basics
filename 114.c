#include<stdio.h>
void main()
{ int arr[]={44,11,66,22,33,88,77},p;
  bubble_sort(arr,7);
  for(p=0;p<=6;p++)
  printf("%d ",arr[p]);
}
bubble_sort(int arr[],int N)
{ int R,C,temp,time;
      for(R=1;R<=N-1;R++)
      { time=0;
        for(C=0;C<=N-1-R;C++)
      {  if(arr[C]>arr[C+1])
          {temp=arr[C];
          arr[C]=arr[C+1];
          arr[C+1]=temp; time=1;}




      }

if(time==0){break;}


      }







}
