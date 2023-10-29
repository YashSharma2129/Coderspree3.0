void generateParenthesis(vector<string>& result, string current, int open, int close, int max) {
    if (current.length() == 2 * max) {
        result.push_back(current);
        return;
    }

    if (open < max) {
        generateParenthesis(result, current + "(", open + 1, close, max);
    }
    if (close < open) {
        generateParenthesis(result, current + ")", open, close + 1, max);
    }
}

vector<string> validParenthesis(int n) {
    vector<string> result;
    generateParenthesis(result, "", 0, 0, n);
    return result;
}