class Solution {
private:
    int func(vector<int>& nums, int n, int j, int k) {
        int res = 0;
        for(int i = 0; i < j && i < n; i++) {
            if(nums[i] != 1) {
                res++;
            }
        }
        for(int i = j; i < k && i < n; i++) {
            if(nums[i] != 2) {
                res++;
            }
        }
        for(int i = k; i < n; i++) {
            if(nums[i] != 3) {
                res++;
            }
        }
        return res;
    }
public:
    int minimumOperations(vector<int>& nums) {
        if(is_sorted(nums.begin(), nums.end())) {
            return 0;
        }
        int result = INT_MAX, n = nums.size();
        for(int k = n + 1; k >= 0; k--) {
            for(int j = k; j >= 0; j--) {
                result = min(result, func(nums, n, j, k));
            }
        }
        return result;
    }
};
