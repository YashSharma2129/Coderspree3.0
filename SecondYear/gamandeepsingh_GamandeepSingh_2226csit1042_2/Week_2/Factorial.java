import java.util.ArrayList;
import java.util.List;
public class Solution {
    public static List<Long> factorialNumbers(long n) {
        // Write Your Code Here
        List<Long> factorials = new ArrayList<Long>();
        long i=1;
        long k=1;
        while(k<=n){
            factorials.add(k);
            i++;
            k*=i;
        }
        return factorials;
    }
}