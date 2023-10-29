#include<stdio.h>

int main(){
    int arr[1000],n,i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Bubble Sort:
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}