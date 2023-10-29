public class Solution {

    public static int[] printNos(int x) {

        // Write Your Code Here
        int [] a=new int[x];
        return recur(x,a);
    }

    public static int[]recur(int x,int[]a){
        if(x==0) return a;
        int i=x;
        a[i-1]=x;
        return recur(x-1,a);
    }

}