import java.util.ArrayList;

public class Solution {
    public static ArrayList<String> validParenthesis(int n) {
        // Write your code here.
        ArrayList<String> result = new ArrayList<>();
        generateParenthesis(n, n, "", result);
        return result;
    }

    private static void generateParenthesis(int left, int right, String current, ArrayList<String> result) {
        if (left == 0 && right == 0) {
            result.add(current);
            return;
        }
        if (left > 0) {
            generateParenthesis(left - 1, right, current + "(", result);
        }
        if (right > left) {
            generateParenthesis(left, right - 1, current + ")", result);
        }
    }
}
