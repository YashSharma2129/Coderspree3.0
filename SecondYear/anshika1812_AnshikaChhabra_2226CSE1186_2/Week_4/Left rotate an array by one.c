#include<stdio.h>

int main(){
    int len,temp,arr[1000],i;
    printf("Enter length of array: ");
    scanf("%d",&len);
    printf("Enter elements of array:\n");
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=1;i<len;i++){
        arr[i-1]=arr[i];
    }
    arr[len-1]=temp;
    for(i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}