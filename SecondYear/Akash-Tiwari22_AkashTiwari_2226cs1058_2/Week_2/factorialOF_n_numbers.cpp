

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
   
    vector<long long>fact;
    long long ans=1;
    for(int i=1;ans*i<=n;i++)
    {
        ans=ans*i;
        fact.push_back(ans);

    }
    return fact;

   



}