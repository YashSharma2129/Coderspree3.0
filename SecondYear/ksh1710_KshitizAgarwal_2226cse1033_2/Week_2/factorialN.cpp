vector<long long> factorialNumbers(long long n) {
   vector<long long> store;
    long long ans=1;
     for(int i=1;ans*i<=n;i++){
        ans=ans*i;
        store.push_back(ans);
     }
     return store;
}