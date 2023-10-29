long reverseBits(long n)
{
    long rev = 0;
    int count = 0;
    while (n)
    {
        int temp;
        temp = n % 2;
        rev = rev * 2 + temp;
        count++;
        n = n / 2;
    }
    rev = rev << (32 - count);
    return rev;
}