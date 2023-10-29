/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int T= sc.nextInt();
        for (int i =0;i<T;i++){
            int N= sc.nextInt();
            int X= sc.nextInt();
            int[] arr= new int[N];
            for (int j =0;j<N;j++){
                arr[j]=sc.nextInt();
            }
            Arrays.sort(arr);
            System.out.println(arr[N-X]-1);
        }
    }
}
