public class Count_Digits {
    public static int countDigits(int n){
        // Write your code here.
        String nStr = Integer.toString(n);
        int count = 0;

        for (int i = 0; i < nStr.length(); i++) {
            char digitChar = nStr.charAt(i);
            int digit = Character.getNumericValue(digitChar);

            if (digit != 0 && n % digit == 0) {
                count++;
            }
        }

        return count;
    }
}