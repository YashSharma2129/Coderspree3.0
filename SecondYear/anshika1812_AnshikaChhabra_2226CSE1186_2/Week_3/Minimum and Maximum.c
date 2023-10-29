#include<stdio.h>

int main(){
    int arr[1000],n,i,j,temp,min,max;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}