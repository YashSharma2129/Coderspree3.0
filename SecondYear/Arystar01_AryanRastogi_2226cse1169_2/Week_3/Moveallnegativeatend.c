#include<stdio.h>
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
    printArray(arr,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]<0 )
            {int temp;
            if(arr[j+1]>0){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }}
        }
    }
    printf("The array after putting all negative as end is :");
    printArray(arr,n);
    return 0;
}
