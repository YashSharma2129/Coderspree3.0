vector<int> generateFibonacciNumbers(int n)
{
    vector<int> fibo;
    int a = 0, b = 1, c;
    while (n)
    {
        fibo.push_back(a);
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return fibo;
}