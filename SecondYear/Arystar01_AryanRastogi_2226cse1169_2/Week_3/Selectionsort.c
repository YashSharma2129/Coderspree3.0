#include<stdio.h>
void swap(int *x, int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void selectionSort(int arr[], int n){
    int min_index;
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[min_index]){
                min_index=j;
            }
                swap(&arr[i],&arr[min_index]);
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
       
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[10],n,item;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number:");
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}