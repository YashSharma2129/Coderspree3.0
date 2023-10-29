import java.util.* ;
import java.io.*; 
public class encodemessage
 {
	public static String encode(String message) {
		// Write your code here.
		 int n = message.length();
		 String str="";
        for (int i = 0; i < n; i++) {
            int count = 1;
            while (i < n - 1&& message.charAt(i) == message.charAt(i + 1)) {
                count++;
                i++;
            }
            str+=message.charAt(i) + "" + count;
        }
		return str;
	}
}