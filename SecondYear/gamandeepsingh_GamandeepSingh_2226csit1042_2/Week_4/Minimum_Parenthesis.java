import java.util.* ;
import java.io.*; 
public class Solution {
	public static int minimumParentheses(String pattern) {

        int open=0,close=0;

        for (int i = 0; i < pattern.length(); i++) {
            if (pattern.charAt(i)=='(') {
                open++;
            }
            else{
                if (open==0) {
                    close++;
                }
                else
                    open--;
            }

        }

        return (open+close);

    }

}


