class Solution {
public:
    string sortSentence(string s) {
        string ans;
        vector<pair<int, string>> p;
        istringstream ss(s);
        string word;
        while(ss >> word){
            int index = word[word.length() - 1];
            word.pop_back();
            p.push_back({index, word});
        }

        sort(p.begin(), p.end());

        for(auto x : p){
            ans += x.second;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};
