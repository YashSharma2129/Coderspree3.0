class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        string prev = countAndSay(n-1);
        char curr = prev[0];
        int cnt=1;
        string ans = "";
        for(int i=1;i<prev.size();i++){
            if(prev[i]!=curr){
                ans += to_string(cnt) + curr;
                cnt=1;
                curr = prev[i];
            }
            else
                cnt++;
        }
        ans += to_string(cnt) + curr;
        return ans;
    }
};