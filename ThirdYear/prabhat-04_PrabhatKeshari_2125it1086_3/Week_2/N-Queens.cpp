class Solution {
    vector<vector<string>>ans;
    bool check(vector<string>&v ,int ind ,int n){
        if(v.empty()) return true;
        for(int i=0 ; i<v.size() ; i++){
            if(v[i][ind]=='Q') return false;
        }
        int y=ind-1;
        int x =v.size()-1;
        while(x>=0 && y>=0){
            if(v[x][y] == 'Q') return false;
            x--;y--;
        }
        y=ind+1;
        x =v.size()-1;
        while(x>=0 && y<n){
            if(v[x][y] == 'Q') return false;
            x--;y++;
        }
        return true;
    }
    void recur(int n,string &s , vector<string>&v ){
        if(v.size() == n) {ans.push_back(v); return;}
        for(int i=0 ; i<n ; i++){
                
            if(check(v, i, n)){
                s[i] = 'Q';
                v.push_back(s);
                s[i] = '.';
                recur(n,s,v);
                v.pop_back();
            }
        }

    }
public:
    vector<vector<string>> solveNQueens(int n) {
        string s="";
        for(int i=0 ; i<n; i++) s+='.';
        vector<string>v;
        recur(n,s,v );
        return ans;
    }
};