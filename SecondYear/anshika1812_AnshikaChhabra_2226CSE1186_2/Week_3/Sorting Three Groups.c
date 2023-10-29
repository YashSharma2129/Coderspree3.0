#include<stdio.h>

int main(){
    int arr[100],n,i,change=0,count=1;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    i=0;
    while(i<n-1){
        while(arr[i+1]>=arr[i] && i<n-1)
        {
            count++;
            i++;
        }
        if(count<n && i!=n-1){
            change++;
        }
        i++;
    }
    printf("%d",change);
    return 0;
}