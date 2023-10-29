import java.util.* ;
import java.io.*; 
public class GenerateParenthesis {
    public static ArrayList<String> validParenthesis(int n){
        // Write your code here.
        ArrayList<String> result = new ArrayList<>();
        generateParenthesisHelper(n, n, "", result);
        return result;
    }

    private static void generateParenthesisHelper(int left, int right, String current, List<String> result) {
        if (left == 0 && right == 0) {
            result.add(current);
            return;
        }

        if (left > 0) {
            generateParenthesisHelper(left - 1, right, current + "(", result);
        }

        if (right > left) {
            generateParenthesisHelper(left, right - 1, current + ")", result);
        }
    } 
}