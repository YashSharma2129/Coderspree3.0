vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long> ans;
    long long int fact = 1;
    long long int i = 2;
    while(fact <= n) { 
        ans.push_back(fact);
        fact = fact * i;
        i++;
    }
    return ans;
}