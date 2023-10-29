import java.util.Scanner;

public class maximum_consecutive_ones {
    public static int maxTrafficJam(int[] vehicle, int n, int m) {
        int maxJamLength = 0;
        int currentJamLength = 0;
        int flippedOnes = 0;

        for (int i = 0; i < n; i++) {
            if (vehicle[i] == 1) {
                currentJamLength++;
            } else {
                if (flippedOnes < m) {
                    currentJamLength++;
                    flippedOnes++;
                } else {
                    currentJamLength = 0;
                }
            }

            if (currentJamLength > maxJamLength) {
                maxJamLength = currentJamLength;
            }
        }

        return maxJamLength;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        int n = scanner.nextInt();
        
        int m = scanner.nextInt();

        int[] vehicle = new int[n];
        for (int i = 0; i < n; i++) {
            vehicle[i] = scanner.nextInt();
        }

        

        int maxJamLength = maxTrafficJam(vehicle, n, m);
        System.out.println(maxJamLength);

        scanner.close();
    }
}
