public class Solution {
    public static int countDigits(int n){
        int c=0;
        int m=n;
        while(n!=0){
            if((n%10)!=0 && (m%(n%10))==0)
               c++;
            n=n/10;
        }
        return c;
    }
}