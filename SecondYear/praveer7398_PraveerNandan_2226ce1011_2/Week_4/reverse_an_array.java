import java.util.Scanner;

public class reverse_an_array {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            String s = scanner.nextLine();

            String reversedString = reverseString(s);
            System.out.println( reversedString);
        }
    }

    public static String reverseString(String s) {
        char[] charArray = s.toCharArray();
        int left = 0;
        int right = charArray.length - 1;

        while (left < right) {
            char temp = charArray[left];
            charArray[left] = charArray[right];
            charArray[right] = temp;

            left++;
            right--;
        }

        return new String(charArray);
    }
}