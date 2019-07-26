#include<stdio.h>
//binary search
void main()
{ int arr[]={22,66,44,11,88,77,99,55,33},item=44;
  bubble_sort(arr,9);

  bin_search(arr,9,item);

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


bin_search(int arr[],int n,int item)
{ int l=0,u=n-1,m;
  while(l<=u)
  {m=(l+u)/2;
  if(item==arr[m])
  {printf("item found successfully at index %d",m);
   return;}
   else if(item>arr[m])
   l=m+1;
   else if(item<arr[m])
   u=m-1;



}
printf(" item is not matching ");
}

