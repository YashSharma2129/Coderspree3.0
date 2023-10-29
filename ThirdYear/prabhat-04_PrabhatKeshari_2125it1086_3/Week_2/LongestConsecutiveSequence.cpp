class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        unordered_set<int> s;
        int cnt = 1;  
        int longest = 1;
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        
        int x = 0; 
        for (auto a : s) {
            if (s.find(a - 1) == s.end()) {
                cnt = 1; 
                x = a; 
                while (s.find(x + 1) != s.end()) {
                    cnt++;
                    x = x + 1;
                }
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};