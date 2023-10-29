import java.util.Scanner;

class sorting_the_sentence {
    public String sortSentence(String s) {
        String[] str = new String[s.split(" ").length];
        for (String st : s.split(" ")) {
            str[st.charAt(st.length() - 1) - '1'] = st.substring(0, st.length() - 1);
        }
        return String.join(" ", str);
    }



    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            String inputSentence = scanner.nextLine();
            
            sorting_the_sentence solution = new sorting_the_sentence();
            String sortedSentence = solution.sortSentence(inputSentence);

            System.out.println(sortedSentence);
        }
        
        
    }
}
