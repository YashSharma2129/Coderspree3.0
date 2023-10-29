public class Solution {
    public static boolean palindromeNumber(int n){
        int m=n;
        int sum=0;
        while(n!=0){
           sum=sum*10 + (n%10);
           n/=10;
        }
        if(sum==m)
        return true;
        else
        return false;  
    }
}