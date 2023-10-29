class Solution {
public:
    int dp[102][4];
    int helper(vector<int>& nums, int x, int last) 
    {
        int n = nums.size();
        if(x == n)
            return 0;

        if(dp[x][last] != -1)
            return dp[x][last];

        int res = 1000;
        if(last <= nums[x])
        {
            res = min(res, helper(nums, x + 1, nums[x]));
            res = min(res, 1 + helper(nums, x + 1, last));
        }
        else
            res = min(res, 1 + helper(nums, x + 1, last));

        return dp[x][last] = res;
    }

    int minimumOperations(vector<int>& nums) 
    {
        int n = nums.size(), res = n;
        memset(dp, -1, sizeof(dp));
        return helper(nums, 0, 1);   
    }
};