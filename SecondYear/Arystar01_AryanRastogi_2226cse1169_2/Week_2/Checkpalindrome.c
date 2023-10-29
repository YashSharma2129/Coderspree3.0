#include <stdio.h>
#include <conio.h>

int main()
{
    int n, original, z, sum = 0;
    printf("Enter the number to check:");
    scanf("%d", &n);
    original = n; // storing actual number
    while (n != 0)
    {
        z = n % 10;
        sum = sum * 10 + z;
        n = n / 10;
    }
    if (original == sum)
    {
        printf("It is a Palindrome number");
    }
    else
    {
        printf("It is not a palindrome number");
    }
    return 0;
}