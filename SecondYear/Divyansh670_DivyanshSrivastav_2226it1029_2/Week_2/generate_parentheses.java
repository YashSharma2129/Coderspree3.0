import java.util.*;
public class generate_parentheses {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int n = sc.nextInt();
            generateParenthesis(n);
        }
    }

    public static void generateParenthesis(int n) {
        generateParenthesisRecursive(n, n, "", 0);
    }

    private static void generateParenthesisRecursive(int left, int right, String current, int openCount) {
        if (left == 0 && right == 0) {
            System.out.println(current);
            return;
        }

        if (left > 0) {
            generateParenthesisRecursive(left - 1, right, current + '(', openCount + 1);
        }

        if (right > 0 && openCount > 0) {
            generateParenthesisRecursive(left, right - 1, current + ')', openCount - 1);
        }
    }
}
