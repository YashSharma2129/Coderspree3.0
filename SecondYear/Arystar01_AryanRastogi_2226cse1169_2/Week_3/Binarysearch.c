#include<stdio.h>

void bubbleSort(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int binary_seacrh(int arr[],int beg, int end, int item){
    while(beg<=end){
        int m = beg + (end-1)/2;
        if(arr[m]==item){
            return m;
        }
        if(arr[m]<item){
            beg=m+1;
        }
        else{
            end=m-1;
        }
    }
return -1;

}
int main(){
      int arr[10],n,item, result;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number:");
        scanf("%d",&arr[i]);
    }
    printf("Enter the item to search:");
    scanf("%d",&item);
    bubbleSort(arr,n);
    result=binary_seacrh(arr,0,n-1,item);
    if(result==-1){
        printf("Element is not found. please enter new elemnt......");
    }
    else
    printf("The item is at %d position, after sorting",result);
}