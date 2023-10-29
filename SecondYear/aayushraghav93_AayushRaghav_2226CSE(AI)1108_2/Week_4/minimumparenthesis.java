import java.util.* ;
import java.io.*; 
public class Solution {
	public static int minimumParentheses(String pattern) {
		if (pattern == null || pattern.length() == 0) {
            return 0;
        }
        Stack<Character> stack = new Stack<>();
        int count = 0;
        for (char c : pattern.toCharArray()) {
            if (c == '(') stack.push(c);
            else if (stack.isEmpty()) count++;
            else stack.pop();
        }
        return count + stack.size();
	}
}