#include<stdio.h>
#define size 20
int a[size],b[size];
void sort(int,int);
void merge(int,int,int);
int main(){
    int i,n;
    printf("enter the number of elements in array");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int low=0,high=n-1;
    sort(0,high);
    printf("array after merge sort\n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}
void sort(int low,int high){
    int mid;
    if(low<high){
            mid=(low+high)/2;
            sort(low,mid);
            sort(mid+1,high);
            merge(low,mid,high);
    }
    else
        return;
}
void merge(int low,int mid,int high){
    int l1,l2,i;
    for(l1=low,l2=mid+1,i=low;l1<=mid&&l2<=high;i++){
        if(a[l1]<=a[l2])
            b[i]=a[l1++];
        else
            b[i]=a[l2++];
    }
    while(l1<=mid)
        b[i++]=a[l1++];
    while(l2<=high)
        b[i++]=a[l2++];
    for(i=low;i<=high;i++)
        a[i]=b[i];
}
