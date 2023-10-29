vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int>fibonacci;
    if(n<1)
    return fibonacci;

fibonacci.push_back(0);
if (n == 1) {
    return fibonacci;
}
fibonacci.push_back(1);
if (n == 2) {
    return fibonacci;
}

for (int i = 2; i < n; i++) {
    int ans = fibonacci[i - 1] + fibonacci[i - 2];
    fibonacci.push_back(ans);
}
return fibonacci;
}