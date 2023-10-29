import java.util.*;
public class Print_Number_1_to_N_using_Recursion {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        int[] array = new int[n];

       
        for (int i = 0; i < n; i++) {
            array[i] = i + 1;
        }

        printArrayRecursively(array, n, 0);
    }

    
    public static void printArrayRecursively(int[] array, int n, int index) {
        if (index == n) {
            return; 
        }

        System.out.println(array[index]);
        printArrayRecursively(array, n, index + 1); 
    }
}
