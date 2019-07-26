#include<stdio.h>
void main()
{ int arr1[]={0,1,2,3,4},arr2[5],a;

for(a=0;a<=4;a++)
arr2[4-a]=arr1[a];
for(a=0;a<=4;a++)
printf("%d ",arr2[a]);
}
