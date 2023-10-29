#include <stdio.h>
int main()
{
    int n, num, arr[100], i;
    printf("enter no. of elements in array:");
    scanf("%d", &n);
    printf("enter array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the number to be searched:");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            printf("%d is present at %d position", num, i);
        }
    }
}