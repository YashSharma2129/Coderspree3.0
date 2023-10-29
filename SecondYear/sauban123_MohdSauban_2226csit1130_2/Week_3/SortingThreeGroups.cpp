class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1 , vector<int> (3,0));
        for(int i=1 ; i<=n ; i++){
            if(nums[i-1] == 1){
                dp[i][1] = 1;
                dp[i][2] = 1;
            }
            else if(nums[i-1] == 2){
                dp[i][0] = 1;
                dp[i][2] = 1; 
            }
            else{
                dp[i][0] = 1;
                dp[i][1] = 1;
            }
            int mini = INT_MAX;
            for(int j=0 ; j<3 ; j++){
                mini = min(mini , dp[i-1][j]);
                dp[i][j] += mini;
            }
            //cout << dp[i][0] << " " << dp[i][1] << " " << dp[i][2] << endl;
        }
        int ans = INT_MAX;
        for(int j = 0 ; j<3 ; j++){
            //cout << dp[n][j] << " ";
            ans = min(ans , dp[n][j]);
        }
        return ans;
    }
};
