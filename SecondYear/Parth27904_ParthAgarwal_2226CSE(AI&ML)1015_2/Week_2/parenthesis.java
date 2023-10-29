import java.util.* ;
import java.io.*; 
public class Solution {
    public static ArrayList<String> validParenthesis(int n){
        // Write your code here.
        ArrayList<String> result = new ArrayList<String>();
        int close = n;
        int open = n;
        String str="";
        helper(str,open,close,result,n);
        return result;
    } 

    static void helper(String str, int open, int close, ArrayList<String> result, int n){
        if(str.length()==2*n){
            result.add(str);
            return;
        }

        if(open>0){
            helper(str+'(', open-1, close, result, n);
        }
        if(close>open){
            helper(str+')', open, close-1, result, n);
        }
    }
}