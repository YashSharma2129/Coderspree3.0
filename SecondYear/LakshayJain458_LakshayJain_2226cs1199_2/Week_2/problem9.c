#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float x;
    printf("enter the base number:");
    scanf("%f",&x);
    printf("enter the power of that number:");
    scanf("%d",&n);
    float res=pow(x,n);
    printf("%f",res);
}