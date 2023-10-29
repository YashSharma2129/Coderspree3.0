class Solution {
public:
    string sortSentence(string s) {
        string word;
        vector<string> v(10);
        for(int i=0 ;i<s.size();i++){
            if(s[i]>=48 && s[i]<=57){
                v[s[i]-48] = word + " ";
                word = ""; 
                i++;
            }
            else {
                word +=s[i];
            }
        }
        string ans;
        for(string s:v){
            ans+=s;
        }
        ans.pop_back();
        return ans;
    }
};
