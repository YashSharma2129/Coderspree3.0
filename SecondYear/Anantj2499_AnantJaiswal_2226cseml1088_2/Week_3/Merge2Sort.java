//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;

public class Merge2Sort
{
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim()); //Inputting the testcases
        while(t-->0){
            String inputLine[] = br.readLine().trim().split(" ");
            int n = Integer.parseInt(inputLine[0]);
            int m = Integer.parseInt(inputLine[1]);
            long arr1[] = new long[n];
            long arr2[] = new long[m];
            inputLine = br.readLine().trim().split(" ");
            for(int i=0; i<n; i++){
                arr1[i] = Long.parseLong(inputLine[i]);
            }
            inputLine = br.readLine().trim().split(" ");
            for(int i=0; i<m; i++){
                arr2[i] = Long.parseLong(inputLine[i]);
            }
            solution ob = new solution();
            ob.merge(arr1, arr2, n, m);

            StringBuffer str = new StringBuffer();
            for(int i=0; i<n; i++){
                str.append(arr1[i]+" ");
            }
            for(int i=0; i<m; i++){
                str.append(arr2[i]+" ");
            }
            System.out.println(str);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class solution
{
    //Function to merge the arrays.
    public static void merge(long arr1[], long arr2[], int n, int m)
    {
        // code here
        int j =0;
        int k = n-1;
        while(k>=0&&j<m){
            if(arr1[k]>arr2[j]){
                long temp = arr1[k];
                arr1[k]= arr2[j];
                arr2[j]= temp;
                j++;
                k--;
            }
            else{
                break;
            }
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);

    }

}
