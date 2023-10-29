#include<stdio.h>

int main(){
    int arr[1000],n,i,j,key;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Insertion Sort:
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(key<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}