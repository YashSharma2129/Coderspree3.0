#include<stdio.h>

int main(){
    int arr[1000],n,i,num;
    scanf("%d %d\n",&n,&num);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;    
}