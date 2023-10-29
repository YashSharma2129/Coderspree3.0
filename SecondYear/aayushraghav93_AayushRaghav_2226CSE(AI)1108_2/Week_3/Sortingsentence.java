import java.util.*;
class Solution {
    public String sortSentence(String s) {
        String [] arr = s.split (" "); 
	        System.out.println("Array is " + Arrays.toString(arr));
	        Arrays.sort(arr, new Comparator<String>() {
	           public int compare(String s1, String s2) {
	               int k = Character.getNumericValue(
	            		   (s1.charAt(s1.length()-1)));
	               System.out.println( "s1 is " + s1);
	               System.out.println("Length of s11 is " + (s1.charAt(s1.length()-1)));
	              System.out.println("ch1 is " + k);
	               int ch2 = Character.getNumericValue(s2.charAt(s2.length()-1));
	               System.out.println( "s2 is " + s2);
	             //  System.out.println("ch2 is " + ch2);
	               if(k <= ch2) {
	                   return -1;
	               } else return 1;
	           } 
	        });
	        
	        System.out.println("Array is " + Arrays.toString(arr));
	        StringBuilder str = new StringBuilder();
	        for(String st : arr) {
	            String temp = st.substring(0, st.length()-1);
	            str.append(temp + " ");
	            System.out.println(temp);
	        }
	        return str.toString().trim();
    }
}
