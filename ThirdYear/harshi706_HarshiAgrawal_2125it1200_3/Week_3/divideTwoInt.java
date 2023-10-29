class Solution {
    public int minBitFlips(int start, int goal) {
        int count=0;
        int n=start ^ goal;
        while(n>0){
        if((n & 1)==1){
            count++;
        }
        n=n>>1;
        } 
        return count;
    }
}class Solution {
    public int divide(int dividend, int divisor) {
        if(dividend == 1<<31 && divisor == -1){
            return Integer.MAX_VALUE;
        }
        boolean sign = (dividend >= 0) == (divisor >= 0) ? true : false;
        
        dividend = Math.abs(dividend);
        divisor = Math.abs(divisor);
        
        int result = 0;
        while(dividend - divisor >= 0){
            int count = 0;
            while(dividend - (divisor << 1 << count) >= 0){
                count++;
            }
            result += 1 <<count;
            dividend -= divisor << count;
        }
        return sign ? result : -result;
    }
}