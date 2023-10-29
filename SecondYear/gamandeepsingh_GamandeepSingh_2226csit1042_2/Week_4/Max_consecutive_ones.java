public class Solution {
      public static int traffic(int n, int m, int []vehicle) {
        int maxL = 0,left = 0,right = 0,sum=0;
        while(right<n){
            sum += vehicle[right];
            if(sum<right-left+1-m){
                sum -= vehicle[left];
                left ++;
            }
            maxL = Math.max(maxL, right - left + 1);
            right++;
        }
        return maxL;
    }
}