void generateParenthesis(int n, int openCount, int closeCount, string current, vector<string>& result) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

    if (openCount < n) {
        generateParenthesis(n, openCount + 1, closeCount, current + '(', result);
    }

    if (closeCount < openCount) {
        generateParenthesis(n, openCount, closeCount + 1, current + ')', result);
    }
}
vector<string> validParenthesis(int n){
    // Write your code here.
     vector<string> result;
    generateParenthesis(n, 0, 0, "", result);
    return result;

}
