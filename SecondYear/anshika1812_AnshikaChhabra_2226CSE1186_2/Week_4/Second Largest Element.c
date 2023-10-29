#include<stdio.h>

int main(){
    int t,len,arr[1000],i,max,secmax,count;
    printf("Enter no. of test cases: ");
    scanf("%d",&t);
    while(t!=0){
        printf("Enter length of array: ");
        scanf("%d",&len);
        for(i=0;i<len;i++){
            scanf("%d",&arr[i]);
        }
        max=secmax=arr[0];
        count=0;
        for(i=0;i<len;i++){
            if(arr[i]>max){
                max=arr[i];
                count++;
            }
        }
        if(count==0){
            printf("%d",-1);
            break;
        }
        for(i=0;i<len;i++){
            if(arr[i]>secmax && arr[i]!=max){
                secmax=arr[i];
            }
        }
        printf("%d",secmax);
        t--;
    }
    return 0;
}