double myPow(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        if (n == 1)
        {
            return x;
        }
        else
        {
            double ans = myPow(x, n - 1);
            ans = ans * x;
            return ans;
        }
    }
    if (n < 0)
    {
        if (n == 0)
        {
            return 1 / x;
        }
        else
        {
            double ans = myPow(x, n + 1);
            ans = ans * 1 / x;
            return ans;
        }
    }
}
