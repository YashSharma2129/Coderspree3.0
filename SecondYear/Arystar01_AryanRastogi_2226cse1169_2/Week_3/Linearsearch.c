#include<stdio.h>
#include<conio.h>
int main(){
    int arr[10],n,item;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number:");
        scanf("%d",&arr[i]);
    }
    printf("Enter the term to search");
    scanf("%d",&item);
    for(int i=0;i<n;i++){
        if(arr[i]==item){
            printf("The item is present at %d position in the array",i);
            return 1;
        }
    }
    printf("No itme is found in the array");
    return 0;
}