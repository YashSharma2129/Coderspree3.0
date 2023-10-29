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
int main(){
    int arr[10],n,item;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number:");
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
       
        printf("%d",arr[i]);
    }
    

}