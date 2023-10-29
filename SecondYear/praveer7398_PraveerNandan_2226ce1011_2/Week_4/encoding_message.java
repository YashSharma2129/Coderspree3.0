import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class encoding_message {

    public static String runLengthEncoding(String input) {
        if (input == null || input.isEmpty()) {
            return "";
        }

        StringBuilder encodedString = new StringBuilder();
        char currentChar = input.charAt(0);
        int count = 1;

        for (int i = 1; i < input.length(); i++) {
            if (input.charAt(i) == currentChar) {
                count++;
            } else {
                encodedString.append(currentChar);
                encodedString.append(count);
                currentChar = input.charAt(i);
                count = 1;
            }
        }

        encodedString.append(currentChar);
        encodedString.append(count);

        return encodedString.toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        int numStrings = scanner.nextInt();
        scanner.nextLine();

        List<String> encodedResults = new ArrayList<>();

        for (int i = 1; i <= numStrings; i++) {
            
            String input = scanner.nextLine();

            String encoded = runLengthEncoding(input);
            encodedResults.add(encoded);
        }

        for (String encoded : encodedResults) {
            System.out.println(encoded);
        }

        scanner.close();
    }
}
