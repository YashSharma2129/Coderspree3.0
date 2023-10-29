class Solution {
    public String countAndSay(int n) {
         if(n==1){
            return "1";
        }
        int count=0;
//Strings are immutable thats why using StringBuilder
        StringBuilder res=new StringBuilder();
        String s=countAndSay(n-1);
       
        for(int i=0;i<s.length();i++){
            count++;
            if(i==s.length()-1 || s.charAt(i)!=s.charAt(i+1)){
            res=res.append(count).append(s.charAt(i));
                count=0;
            }
        }
        return res.toString();
    }
}