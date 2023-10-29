int search(vector<int> &nums, int target) {
    // Write your code here.
    int l=0;
    int h =nums.size()-1;
    int mid = (l+h)/2;
    while(l<=h){
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid]>target){
            h= mid-1;
        }
        else {
            l=mid+1;
        }
        mid = (l+h)/2;
    }
    return -1;
}
