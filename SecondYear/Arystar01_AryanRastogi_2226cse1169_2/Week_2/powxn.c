
#include <stdio.h>
#include <math.h>

double myPower(double x, int n);

int main() {
    double x;
    int n;
    printf("Enter the base (x): ");
    scanf("%lf", &x);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);
    
    double result = myPower(x, n);
    printf("%lf\n", result);
    return 0;
}

double myPower(double x, int n) {
    return pow(x, n);
}