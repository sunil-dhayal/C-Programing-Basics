#include<stdio.h>
void main()
{ int arr[]={22,88,77,99};int a;

    ins_sort(arr,4);
    for(a=0;a<=3;a++)
    printf("%d ",arr[a]);
  }


    void ins_sort(int arr[],int n)
{   int i,j,temp;
    for(i=1;i<=3;i++)
    { temp=arr[i];j=i-1;
    while(j>=0&&temp<arr[j])
    { arr[j+1]=arr[j];
      j--;
    }
     arr[j+1]=temp;
    }




    }
