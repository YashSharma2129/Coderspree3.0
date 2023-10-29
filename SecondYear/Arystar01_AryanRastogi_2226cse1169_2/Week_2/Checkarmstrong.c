#include <stdio.h>

#include <math.h>
int main()
{
    int n, count = 0, sum, z, num;

    printf("Enter the number:");
    scanf("%d", &n);
    num = n;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    num = n;
    sum = 0;
    while (num != 0)
    {
        z = num % 10;
        sum = sum + pow(z, count);
        num = num / 10;
    }
    if (sum == n)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number.");
    }
    return 0;
}