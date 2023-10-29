int countDigits(int n) {
    int original_n = n;
    int count = 0;

    while (n > 0) {
        int digit = n % 10;
        n /= 10;

        if (digit != 0 && original_n % digit == 0) {
            count++;
        }
    }

    return count;
}
