#include<stdio.h>

int main(){
    int arr1[100],arr2[100],i,j,k,n1,n2,end1;
    printf("Enter no. of elements in first array: ");
    scanf("%d",&n1);
    printf("Enter elements of first sorted array:\n");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter no. of elements in second array: ");
    scanf("%d",&n2);
    printf("Enter elements of second sorted array:\n");
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n2;i++){
        end1=arr1[n1-1];
        for(j=0;j<n1;j++){
            if(arr1[j]>arr2[0]){
                for(k=n1-2;k>=j;k--){
                    arr1[k+1]=arr1[k];
                }
                arr1[j]=arr2[0];
                break;
            }
        }
        for(j=n2-1;j>=0;j--){
            if(end1>arr2[j]){
                for(k=1;k<=j;k++){
                    arr2[k-1]=arr2[k];
                }
                arr2[j]=end1;
                break;
            }
        }
    }
    for(i=0;i<n1;i++){
        printf("%d ",arr1[i]);
    }
    for(i=0;i<n2;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}