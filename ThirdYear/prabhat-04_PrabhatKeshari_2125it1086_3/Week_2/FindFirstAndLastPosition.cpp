class Solution {
public:

    int firstIndex(vector<int> nums,int low,int high,int k){
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==k){
                if(mid==0 || nums[mid]!=nums[mid-1])
                    return mid;
                else
                    high = mid -1;
            }
            else if(k<nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }

    int lastIndex(vector<int> nums,int low,int high,int k){
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==k){
                if(mid==high || nums[mid]!=nums[mid+1])
                    return mid;
                else
                    low=mid+1;
            }
            else if(k<nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return -1;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstIndex(nums,0,nums.size()-1,target),lastIndex(nums,0,nums.size()-1,target)};

    }
};