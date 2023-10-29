void call(int open, int close, int n, string str, vector<string> &ans)
{
    if (open == n && close == n)
    {
        ans.push_back(str);
        return;
    }
    if (open < n)
    {
        call(open + 1, close, n, str + '(', ans);
    }
    if (open > close)
    {
        call(open, close + 1, n, str + ')', ans);
    }
}
vector<string> validParenthesis(int n)
{
    vector<string> ans;
    string str;
    call(0, 0, n, str, ans);
    return ans;
}