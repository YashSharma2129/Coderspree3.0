class Solution {
public:
    bool isPalindrome(string str){
        int l=0,h=str.size()-1;
        while(l<=h){
            if(str[l++]!=str[h--])
                return false;
        }
        return true;
    }
    vector<vector<string>> ans;
    void helper(int i,int n,string& s,vector<string>& vec){
        if(i==n){
            ans.push_back(vec);
            return;
        }
        for(int j=1;j<=n-i;j++){
            if(isPalindrome(s.substr(i,j))){
                vec.push_back(s.substr(i,j));
                helper(i+j,n,s,vec);
                vec.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> vec;
        int n=s.size();
        helper(0,n,s,vec);
        return ans;
    }
};