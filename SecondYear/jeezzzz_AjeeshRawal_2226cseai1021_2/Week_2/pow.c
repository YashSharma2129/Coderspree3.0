#include <stdio.h>
#include <math.h>

double calculatePower(double x, int n);

int main() {
    double x;
    int n;
    printf("Enter the base (x): ");
    scanf("%lf", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    
    double result = calculatePower(x, n);
    printf("%lf\n", result);
    return 0;
}

double calculatePower(double x, int n) {
    return pow(x, n);
}
