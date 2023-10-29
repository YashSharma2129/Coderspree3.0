#include <stdio.h>
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}
int main()
{
    int n;
    printf("enter number of elements in array\n:");
    scanf("%d", &n);
    int ARR[n];
    printf("enter array elements\n:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ARR[i]);
    }
    int size = sizeof(ARR) / sizeof(ARR[0]);
    insertionSort(ARR, size);
    printf("Sorted array in ascending order:\n");
    printArray(ARR, size);
}