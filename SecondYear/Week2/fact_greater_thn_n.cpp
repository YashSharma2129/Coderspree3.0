
vector<long long> factorialNumbers(long long n) {
    vector<long long> result;
    long long fact = 1;
    long long i = 1;
    
    while (fact <= n) {
        result.push_back(fact);
        i++;
        fact = fact * i;
    }
    
    return result;
}