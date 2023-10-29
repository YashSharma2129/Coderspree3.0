long long fact(long long x){
    if(x==1){
        return 1;
    }
    return x*fact(x-1);
}
vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
     vector<long long> ans;
    if(n>=1){
        ans.push_back(1);
    }
    long long i=2;
    while(true){
        long long y = fact(i);
        if(y<=n){
            ans.push_back(y);
        }
        else{
            break;
        }
        i++;
    }
    return ans;
}