#include <stdio.h>
void printNaturalNumbers(int lowerLimit, int upperLimit);
int main()
{
    int i = 1, n;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    printf("All natural numbers from %d to %d are: ", i, n);
    printNaturalNumbers(i, n);
    return 0;
}
void printNaturalNumbers(int i, int n)
{
    if (i > n)
        return;

    printf("%d, ", i);

    printNaturalNumbers(i + 1, n);
}