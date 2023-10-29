public class Traffic {
    public static int traffic(int n, int m, int []vehicle) {
        // Write your code here.
        int maxL = 0,left = 0,right = 0,sum=0;
        while(right<n){
            sum += vehicle[right];
            // here checking the rule
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