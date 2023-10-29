class Solution {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }
      Arrays.sort(nums);
        int x=1;
        int index=1;
        for (int i=1; i< nums.length; i++){
            if(nums[i]==nums[i-1]+1){
                index++;
            }
            else if(nums[i]!=nums[i-1]){
                index=1;
            }
        x = Math.max(x, index);
        }
        return x;
    }
}