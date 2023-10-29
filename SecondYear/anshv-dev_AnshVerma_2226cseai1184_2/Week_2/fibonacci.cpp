vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    if(n==1){
        return {0};
    }
    else if(n==2){
        return {0,1};
    }
    vector<int> fib(n,0);
    fib[1]=1;
    for(int i=2;i<n;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
    return fib;
}