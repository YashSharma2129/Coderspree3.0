int search(vector<int> &nums, int target) {
    // Write your code here.
    int start = 0;
    int end = nums.size() - 1;
    int mid;
    while(start <= end){
        mid = (start + end) / 2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid] > target){
            end = mid - 1;
        }
        if(nums[mid] < target){
            start = mid + 1;
        }
    }
    return -1;
}
