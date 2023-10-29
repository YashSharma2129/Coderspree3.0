long long factorial(long long n)
{
    long long fact=1;
    while(n!=0)
    {
        fact*=n;
        n--;
    }
    return fact;
}
vector<long long> factorialNumbers(long long n)
{
    // Write Your Code Here
    vector<long long> ans;
    long long i=1;
    for(i;i<=n;i++)
    {
        long long i_fact=factorial(i);
        if (i_fact>n)
         break;
        ans.push_back(i_fact);

    }
    return ans;
} 