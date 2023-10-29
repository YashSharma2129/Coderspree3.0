class Solution {
    public boolean isPowerOfTwo(int n) {
        int ans=1;
        if(n<=0){
            return false;
        }
        for(int i=0;i<=30;i++){
            if(ans==n){
                return true;
            }
            ans*=2;
        }
                return false;
    }}