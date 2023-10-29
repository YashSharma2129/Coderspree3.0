#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n, bit;
    long long int ans;
    int arr[32];
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<32;i++){
        bit=n%2;
        arr[i]=bit;
        n=n/2;
    }
    int j=0;
    ans=0;
    for(int i=31;i>=0;i--){
        ans=ans+arr[i]*pow(2,j);
        j++;

    }
    printf("%d",ans);
    return 0;
}