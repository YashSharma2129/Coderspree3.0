class Solution {
public:

    void solve(vector<int>&nums,vector<int>res,vector<vector<int>>&ans,int i){
        if(i>=nums.size()){
            ans.push_back(res);
            return;
        }
        solve(nums,res,ans,i+1);
        res.push_back(nums[i]);
        solve(nums,res,ans,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        solve(nums,res,ans,0);
        return ans;
    }
};