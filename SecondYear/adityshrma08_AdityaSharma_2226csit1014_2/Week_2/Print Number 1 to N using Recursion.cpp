void rec(int i, int n, vector<int>& ans) {
    if(i > n) return;
    ans.push_back(i);
    rec(i + 1, n, ans); 
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    rec(1, x, ans);
    return ans;
}