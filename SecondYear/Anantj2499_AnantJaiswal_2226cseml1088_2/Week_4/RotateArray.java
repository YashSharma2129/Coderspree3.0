import java.util.* ;
import java.io.*;


public class RotateArray {

    static int[] rotateArray(int[] arr, int n) {
        // Write your code here.
        int num[]= new int[n];
        System.arraycopy(arr, 1, num, 0, num.length-1);
        num[num.length-1]=arr[0];
        return num;

    }
}