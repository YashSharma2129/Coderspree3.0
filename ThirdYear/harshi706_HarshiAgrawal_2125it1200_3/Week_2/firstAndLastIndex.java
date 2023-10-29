class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] result={-1,-1};
        if(nums.length==0)
         return result;    
        for(int i=0;i<nums.length;i++){
           if(nums[i]==target){
               result[0]=i;
               break;
           }}
           if(result[0]==-1){
               return result;
           }
            for(int j=nums.length-1;j>=0;j--){
                if(nums[j]==target){
                    result[1]=j;
                    break;
                }
                }
        return result;
    }
}