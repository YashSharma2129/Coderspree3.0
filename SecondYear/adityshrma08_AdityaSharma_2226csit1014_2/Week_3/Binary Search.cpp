int search(vector<int> &nums, int target) {
    // Write your code here.
    int s=0,e=nums.size()-1;
    int mid;
    while(s<=e){
    mid = (s+e)/2;
    if(nums[mid]==target){
        return mid;
    }
    else if(nums[mid]>target){
        e = mid-1;
    }
    else{
        s = mid + 1;
    }
    }
    return -1;
}