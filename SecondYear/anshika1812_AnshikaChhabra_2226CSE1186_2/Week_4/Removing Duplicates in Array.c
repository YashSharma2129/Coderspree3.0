#include<stdio.h>

int main(){
    int len,newlen=0,arr[1000],i=0;
    printf("Enter length of original array: ");
    scanf("%d",&len);
    printf("Enter elements of sorted array:\n");
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    i=0;
    while(i<len){
        if(i==len-1){
            newlen++;
            break;
        }
        while(arr[i]==arr[i+1]){
            i++;
        }
        newlen++;
        i++;
    }
    printf("%d",newlen);
    return 0;
}