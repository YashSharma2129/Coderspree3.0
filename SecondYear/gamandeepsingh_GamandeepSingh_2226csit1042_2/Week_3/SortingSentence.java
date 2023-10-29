class Solution {
    public String sortSentence(String s) {
        String[] words = s.split(" ");

        String[] originalWords = new String[words.length];

        for (String word : words) {
            int index = Integer.parseInt(word.substring(word.length() - 1)) - 1;
            originalWords[index] = word.substring(0, word.length() - 1);
        }

        StringBuilder originalSentence = new StringBuilder();
        for (String word : originalWords) {
            originalSentence.append(word).append(" ");
        }

        return originalSentence.toString().trim();
    }
}