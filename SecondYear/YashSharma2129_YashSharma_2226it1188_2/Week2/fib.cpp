vector<int> generateFibonacciNumbers(int n) {
    vector<int> result;
    if (n >= 1) result.push_back(0);
    if (n >= 2) result.push_back(1);
    
    for (int i = 2; i < n; i++) {
        int nextFib = result[i - 1] + result[i - 2];
        result.push_back(nextFib);
    }
    
    return result;
}