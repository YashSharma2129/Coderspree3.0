#include<stdio.h>

int main(){
    int arr[1000],n,i,j=0,temp[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>=0){
            temp[j]=arr[i];
            j++;
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            temp[j]=arr[i];
            j++;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",temp[i]);
    }
    return 0;
}