#include<stdio.h>
#define SIZE 20
int main(){
            int a[SIZE],i,j,k,n,swap,in,b;
            printf("enter the number of elements in array:");
            scanf("%d",&n);
            printf("enter the elements of array\n");
            for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            for(i=0;i<n-1;i++){
                    in=i;
                    for(j=i+1;j<n;j++){
                        if(a[in]>a[j]){
                            in=j;
						}
              		}
                    swap=a[i];
                    a[i]=a[in];
                    a[in]=swap;
                    printf("array after %d selection sort:",i+1);
                    for(k=0;k<n;k++)
                        printf("%d  ",a[k]);
                    printf("\n");
            }
}
