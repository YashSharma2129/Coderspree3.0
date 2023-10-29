import java.util.Scanner;

public class minimum_and_maximum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();

        int[] array = new int[N];

        for (int i = 0; i < N; i++) {
            array[i] = scanner.nextInt();
        }

        int min = findMin(array);
        int max = findMax(array);

        System.out.println( min +" "+ max);
        

        scanner.close();
    }

    public static int findMin(int[] array) {
        int min = array[0];
        for (int i = 1; i < array.length; i++) {
            if (array[i] < min) {
                min = array[i];
            }
        }
        return min;
    }

    public static int findMax(int[] array) {
        int max = array[0];
        for (int i = 1; i < array.length; i++) {
            if (array[i] > max) {
                max = array[i];
            }
        }
        return max;
    }
}
