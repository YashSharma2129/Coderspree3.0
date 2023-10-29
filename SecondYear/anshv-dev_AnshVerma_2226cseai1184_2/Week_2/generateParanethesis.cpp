void generateParenthesis(int left, int right, string current,vector<string>& result) {
    if (left == 0 && right == 0) {
        result.push_back(current);
        return;
    }

    if (left > 0) {
        generateParenthesis(left - 1, right, current + '(', result);
    }

    if (right > left) {
        generateParenthesis(left, right - 1, current + ')', result);
    }
}
vector<string> validParenthesis(int n){
    // Write your code here.
     vector<string> result;
    generateParenthesis(n, n, "", result);
    return result;
}