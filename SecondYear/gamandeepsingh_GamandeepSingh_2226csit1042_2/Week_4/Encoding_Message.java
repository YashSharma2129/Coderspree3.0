import java.util.* ;
import java.io.*; 
public class Solution {
	public static String encode(String message) {
		StringBuilder str=new StringBuilder();

		int c=0;
        char b=message.charAt(0);
		for(int i=0;i<message.length();i++){
			if(message.charAt(i)==b)
			   c++;
            else{
				str.append(b);
				str.append(c);
				c=1;
				b=message.charAt(i);

			}
		}
		str.append(b);
		str.append(c);

		return str.toString();

	}
}