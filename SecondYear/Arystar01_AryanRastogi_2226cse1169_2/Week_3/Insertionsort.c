#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}