import java.util.Scanner;

public class reverse_string_wordwise {

    public static String reverseWordOrder(String input) {
        String[] words = input.split(" ");
        int n = words.length;

        for (int i = 0; i < n / 2; i++) {
            String temp = words[i];
            words[i] = words[n - i - 1];
            words[n - i - 1] = temp;
        }

        return String.join(" ", words);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String input = scanner.nextLine();

        String reversedString = reverseWordOrder(input);
        System.out.println(reversedString);

        scanner.close();
    }
}
