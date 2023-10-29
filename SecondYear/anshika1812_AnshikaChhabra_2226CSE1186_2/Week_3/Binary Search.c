#include<stdio.h>

int main(){
    int arr[1000],n,i,j,temp,num,beg,end,mid;
    scanf("%d %d\n",&n,&num);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Bubble Sort: (If given array is not already sorted)
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //Binary Search:
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    for(i=0;i<n;i++){
        if(num>arr[mid]){
            beg=mid+1;
        }
        if(num<arr[mid]){
            end=mid-1;
        }
        if(num==arr[mid]){
            return mid;
            break;
        }
        mid=(beg+end)/2;
    }
    return -1;    
}