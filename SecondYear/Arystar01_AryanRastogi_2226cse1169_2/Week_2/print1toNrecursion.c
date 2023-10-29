#include<stdio.h>
#include<conio.h>
void recursion(int x, int n){
    if(x==n){
        printf("%d",x);
        return 0;
    }
    printf("%d",x    );
    return recursion(x+1,n);
}
int main(){
    int n ;
    printf("Enter the number to print:");
    scanf("%d",&n);
    recursion(1,n);

}