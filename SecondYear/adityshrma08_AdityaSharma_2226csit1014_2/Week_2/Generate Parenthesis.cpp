void solve(string S,vector<string> &ans,int open,int close,int n){
        if(open==n && close==n){
            ans.push_back(S);
            return;
        }
        if(open!=n)solve(S+'(',ans,open+1,close,n);
        if(open>close)solve(S+')',ans,open,close+1,n);
        
    }

vector<string> validParenthesis(int n){
    // Write your code here.
        string S = "";
        vector<string> ans;
        solve(S,ans,0,0,n);
        return ans;
}