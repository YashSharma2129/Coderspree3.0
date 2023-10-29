import java.util.Scanner;

class Solution {

    static String reverseStringWordWise(String input) {
         String[] str = input.split(" ");
        int n = str.length;

        for (int i = 0; i < n / 2; i++) {
            String temp = str[i];
            str[i] = str[n - i - 1];
            str[n - i - 1] = temp;
        }

        return String.join(" ", str);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String ans = reverseStringWordWise(input);
        System.out.println(ans);
    }
}