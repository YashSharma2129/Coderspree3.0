vector<int> printNos(int x) {
    // Write Your Code Here
    if (x == 1) {
        return vector<int>{1};
    }
    vector<int> result = printNos(x - 1);
    result.push_back(x);
    
    return result;
}