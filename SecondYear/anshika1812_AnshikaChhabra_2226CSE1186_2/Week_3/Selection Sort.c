#include<stdio.h>

int main(){
    int arr[1000],n,i,j,min,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Selecttion Sort:
    for(i=0;i<n;i++){
        min=i;
        j=i-1;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}