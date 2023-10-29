#include <stdio.h>
int main()
{
    int n, a, rev = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    int org=n;
    while (n != 0)
    {
        a = n % 10;
        rev = rev * 10 + a;
        n = n / 10;
    }
    if (rev == org)
    {
        printf("number is palindrome");
    }
    else
        printf("number is not a palindrome");
    return 0;
}