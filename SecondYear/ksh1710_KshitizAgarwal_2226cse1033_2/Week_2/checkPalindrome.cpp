bool palindrome(int n)
{
    int d, rev = 0, cpy;
    cpy = n;
    do
    {
        d = cpy % 10;
        rev = (rev * 10) + d;
        cpy = cpy / 10;
    } while (cpy != 0);
    if (rev == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}