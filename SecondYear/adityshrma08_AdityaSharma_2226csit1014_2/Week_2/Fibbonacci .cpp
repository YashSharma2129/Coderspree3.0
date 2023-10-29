vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int>fibo;
    int num1 = 0;
    int next;
    fibo.push_back(num1);
    if(n==1){
        return fibo;
    }
    int num2=1;
    fibo.push_back(num2);
    if(n==2){
        return fibo;
    }
    for(int i=0;i<n-2;i++){
        next = num1 + num2;
        fibo.push_back(next);
        num1 = num2;
        num2 = next;

    }
    return fibo;
}