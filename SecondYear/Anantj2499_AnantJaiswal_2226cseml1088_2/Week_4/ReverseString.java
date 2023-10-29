import java.util.Scanner;
import java.util.StringTokenizer;

class ReverseString {

    static String reverseStringWordWise(String input) {
        // Write your code here
        String str = "";
        StringTokenizer st = new StringTokenizer(input);
        while(st.hasMoreTokens()){
            str=st.nextToken()+" "+str;
        }
        return str;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String ans = reverseStringWordWise(input);
        System.out.println(ans);
    }
}