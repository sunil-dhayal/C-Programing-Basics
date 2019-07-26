#include<stdio.h>
int n;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high]; 
    int pivotindex = low,j; 
  
    for(j = low; j <= high- 1; j++) 
    {
        if (arr[j] <= pivot) 
        {  
            swap(&arr[pivotindex], &arr[j]);
            pivotindex++;
        } 
    } 
    swap(&arr[pivotindex], &arr[high]); 
    return pivotindex; 
}
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    {
        int pivotindex = partition(arr, low, high);
        int i; 
    	for (i=0; i <= n; i++) 
        	printf("%d ", arr[i]); 
    	printf("\n");
        quickSort(arr, low, pivotindex - 1);
        quickSort(arr, pivotindex + 1, high);
    } 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
int main() 
{ 
    int arr[1000],i;
	printf("enter the number of elements in array:");scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    quickSort(arr, 0, n-1); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
}
