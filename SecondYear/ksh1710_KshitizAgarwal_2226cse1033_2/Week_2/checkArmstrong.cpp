bool checkArmstrong(int n)
{
    int cpy, cpy2, c = 0, arm = 0, d;
    cpy = n;
    cpy2 = n;
    while (cpy)
    {
        cpy = cpy / 10;
        c++;
    }

    while (cpy2)
    {
        d = cpy2 % 10;
        arm = arm + pow(d, c);
        cpy2 = cpy2 / 10;
    }
    if (arm == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
