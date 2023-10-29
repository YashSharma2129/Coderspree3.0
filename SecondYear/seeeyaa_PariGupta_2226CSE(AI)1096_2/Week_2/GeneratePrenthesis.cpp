
void _printParenthesis(int pos, int n, int open, int close, vector<string> &result);
void printParenthesis(int n,vector<string> &result)
{
    
    if (n > 0)
        _printParenthesis(0, n, 0, 0,result);
    return;
}
 
void _printParenthesis(int pos, int n, int open, int close,vector<string> &result)
{

    static char str[100];
 
    if (close == n) {
        result.push_back(string(str));
        return;
    }
    else {
        if (open > close) {
            str[pos] = ')';
            _printParenthesis(pos + 1, n, open, close + 1,result);
        }
 
        if (open < n) {
            str[pos] = '(';
            _printParenthesis(pos + 1, n, open + 1, close,result);
        }
    }
}
vector<string> validParenthesis(int n)
{
    vector<string> result;
    printParenthesis(n,result);
    return result;
}