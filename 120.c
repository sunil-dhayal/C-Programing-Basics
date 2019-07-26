#include<stdio.h>
void largest(int *arr,int n,int *smallest);
void main()
{ int arr[]={1,4,15,7,6,4,1,3,2};int a,smallest;
  largest(&arr[0],9,&smallest);//can also be written as largest(arr,9,&smallest);


printf("%d",smallest);



}
void largest(int *arr,int n,int *smallest)
{ int a,b=arr[0];
for(a=0;a<=n-1;a++)
{if(b>arr[a])
 b=arr[a];

}

*smallest=b;
return;
}
