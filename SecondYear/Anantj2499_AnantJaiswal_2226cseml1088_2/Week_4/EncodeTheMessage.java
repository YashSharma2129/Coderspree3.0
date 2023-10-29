public class EncodeTheMessage {
    public static String encode(String message) {
        // Write your code here.
        String str;
        StringBuilder sb = new StringBuilder();
        sb.append(message.charAt(0));
        int count =1;
        for (int i = 1; i < message.length(); i++) {
            if (message.charAt(i)==message.charAt(i-1)) {
                count++;
            }
            else{
                sb.append(count).append(message.charAt(i));
                count=1;
            }
        }
        sb.append(count);
        str=sb.toString();
        return str;
    }
}
