#include<stdio.h>
int main(){
	int a[100],n,i,j,k,swap=0,com=0,temp;
	printf("enter the number of values in array:");
	scanf("%d",&n);
	
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){
	
	if(a[j]>a[j+1]){
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	swap=swap+1;
	com=com+1;}
	else
	com=com+1;
	}

	printf("the elements of array after %d pass:",i+1);	
	for(k=0;k<n;k++)
	printf("%d  ",a[k]);
	printf("\n");
}
	printf("com. are %d\n",com);
	printf("swaps are %d\n",swap);
}
