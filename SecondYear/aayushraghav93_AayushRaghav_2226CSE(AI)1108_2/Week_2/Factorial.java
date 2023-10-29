import java.util.ArrayList;
import java.util.List;

public class Factorial {

    static long fact(long j) {
        if (j == 1 || j == 0) {
            return 1;
        } else {
            return j * fact(j - 1);
        }
    }

    public static List<Long> factorialNumbers(long n) {
        List<Long> l = new ArrayList<>();
        for (long i = 1; i <= n; i++) {
            long a = fact(i);
            if (a <=n) {
                l.add(a);
            } else {
                break;
            }
        }
        return l;
    }
}
