#include<stdio.h>

int main(){
    int n, m,flips,arr[100],i,j=0,count=0,result=0;
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);
    printf("Enter maximum no. of flips: ");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(j<n){
        i=j;
        flips=m;
        count=0;
        while(i<n){
            if(arr[i]==1){
                count++;
                i++;
            }
            else if(flips>0){
                count++;
                flips--;
                i++;
            }
            else{
                break;
            }
        }
        if(count>result){
            result=count;
        }
        j++;
        if(j==n){
            printf("%d",result);
            break;
        }
    }
    return 0;
}