
#include <stdio.h>
#include <stdlib.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("  %d", arr[i]);
    }
    printf("\n");
}
void swap(int arr[], int start, int end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}
void moveNegative(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] < 0 && arr[j] >= 0)
        {
            swap(arr, i, j);
            i++;
            j--;
        }
        else if (arr[i] >= 0)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}
int main()
{
    int m;
    printf("enter number of elements in array\n:");
    scanf("%d", &m);
    int arr[m];
    printf("enter array elements\n:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before Arrange : \n");
    display(arr, n);
    moveNegative(arr, n);
    printf("After Arrange : \n");
    display(arr, n);
    return 0;
}