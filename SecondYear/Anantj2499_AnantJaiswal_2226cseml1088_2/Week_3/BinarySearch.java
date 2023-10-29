public class BinarySearch {
    public static int search(int []nums, int target) {
        // Write your code here.
        int start =0;
        int end = nums.length-1;
        int pos = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target){
                pos = mid;
                break;
            }
            if (nums[mid]<target)
                start=mid+1;
            if (nums[mid]>target)
                end = mid-1;
        }
        return pos;
    }
}