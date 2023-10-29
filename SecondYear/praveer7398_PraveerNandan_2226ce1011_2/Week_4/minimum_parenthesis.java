import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class minimum_parenthesis {

    public static int minAddToMakeValid(String pattern) {
        int openCount = 0;
        int addCount = 0;

        for (char c : pattern.toCharArray()) {
            if (c == '(') {
                openCount++;
            } else if (c == ')') {
                if (openCount > 0) {
                    openCount--;
                } else {
                    addCount++;
                }
            }
        }

        return openCount + addCount;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        int numPatterns = scanner.nextInt();
        scanner.nextLine(); 

        List<Integer> results = new ArrayList<>();

        for (int i = 1; i <= numPatterns; i++) {
            
            String pattern = scanner.nextLine();

            int minAdditions = minAddToMakeValid(pattern);
            results.add(minAdditions);
        }

        
        for (int i = 0; i < numPatterns; i++) {
            System.out.println(results.get(i));
        }

        scanner.close();
    }
}
