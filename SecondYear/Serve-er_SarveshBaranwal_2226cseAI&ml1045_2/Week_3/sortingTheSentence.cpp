class Solution {
public:
    string sortSentence(string s) {
        
        string ans = "";
        for(int i = 1; i <= 9; i++)
        {
            if(s.find(to_string(i)) == string::npos) break;

            int end = s.find(to_string(i));
            cout << "end " << end << endl;
            int start = end;
            while(start >= 0 and s[start] != ' ') start--;

            if(start < 0) start = 0;
            int l = end - start;
            string temp = s.substr(start,l);
            cout << temp << endl;
            ans += temp;
            ans.push_back(' ');
        }
        cout << ans << endl;
        ans.erase(ans.length()-1,1);

        if(ans[0] == ' ') ans.erase(0,1);

        while(ans.find("  ") != string::npos)
        {
            int idx = ans.find("  ");
            ans.erase(idx,1);
        }
        return ans;
    }
};