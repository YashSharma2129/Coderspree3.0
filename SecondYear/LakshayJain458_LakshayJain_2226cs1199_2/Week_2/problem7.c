#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial numbers less than or equal to %d are: \n", n);
    for (i = 1; i <= n; i++)
    {
        int fact= 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        if (fact <= n)
        {
            printf("%d\n", fact);
        }
    }
    return 0;
}