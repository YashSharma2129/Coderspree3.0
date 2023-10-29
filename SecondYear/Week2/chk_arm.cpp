bool checkArmstrong(int n){
 int originalN = n;
    int numDigits = 0;
    int sum = 0;

    while (n > 0) {
        numDigits++;
        n /= 10;
    }

    n = originalN;

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    return sum == originalN;
}