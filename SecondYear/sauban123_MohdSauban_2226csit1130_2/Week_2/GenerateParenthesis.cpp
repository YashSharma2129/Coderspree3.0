void rec(vector<string> &res,int o,int c,int n,string s){
    if(c==n){
        res.push_back(s);
        return;
    } 
    if(o<n){
        rec(res,o+1,c,n,s+'(');
    }
    if(c<o){
        rec(res,o,c+1,n,s+')');
    }
}
vector<string> validParenthesis(int n){
    // Write your code here.
    vector<string> res;
    rec(res,0,0,n,"");
    return res;
}