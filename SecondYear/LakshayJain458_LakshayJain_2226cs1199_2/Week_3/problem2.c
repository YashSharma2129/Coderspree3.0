#include <stdio.h>
int binarySearch(int array[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}
int main(void)
{
    int y;
    printf("enter number of elements in array\n:");
    scanf("%d", &y);
    int array[y];
    printf("enter array elements\n:");
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &array[i]);
    }
    int n = sizeof(array) / sizeof(array[0]);
    int x;
    printf("enter the target\n:");
    scanf("%d", &x);
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
    return 0;
}