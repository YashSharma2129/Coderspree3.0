public class Printnumber
 {
    public static int[] printNos(int n) {
        // Write Your Code Here
        if (n <= 0) {
        return new int[0]; // Return an empty array for n <= 0
    }

    int[] result = new int[n];
    for (int i = 1; i <= n; i++) {
        result[i - 1] = i;
    }

    return result;
    }
}