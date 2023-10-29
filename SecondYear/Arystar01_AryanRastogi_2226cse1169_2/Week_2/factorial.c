#include<stdio.h>
int factorial(int n){
    if (n==1 || n==0){
        return 1;

    }
    return n*factorial(n-1);
}
int main(){
    int n ;
    printf("Enter the number:");
    scanf("%d",&n);
    int i=1;
    while(factorial(i)<=n){
        printf("%d ",factorial(i));
        i++;
    }
    return 0;
}
