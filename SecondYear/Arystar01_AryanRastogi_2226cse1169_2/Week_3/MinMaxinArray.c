#include <stdio.h>
int main()
{
    int arr[10], n, item, result;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number:");
        scanf("%d", &arr[i]);
    }
    int min, max;
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("The min term is %d \n", min);
    printf("The max term is %d \n", max);

    return 0;
}
