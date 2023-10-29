#include<stdio.h>
#include<conio.h>
int main(){
    int n,z,num;
    int count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    num=n;
    while(n!=0){
        
        z=n%10;
        if(num%z==0){
            count++;
        }
    n=n/10;
    }
    printf("%d",count);
    return 0;
}
