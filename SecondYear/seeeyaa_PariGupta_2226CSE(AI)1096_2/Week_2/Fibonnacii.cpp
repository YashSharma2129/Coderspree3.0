vector<int> generateFibonacciNumbers(int n) 
{
    vector<int> fibNumbers;
    if (n >= 1) {
        fibNumbers.push_back(0);
    }
    if (n >= 2) {
        fibNumbers.push_back(1);
    }

    for (int i = 3; i <= n; i++) {
        int next = fibNumbers[i - 2] + fibNumbers[i - 3];
        fibNumbers.push_back(next);
    }

    return fibNumbers;
}