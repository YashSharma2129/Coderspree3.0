
public class bubblesort {
    public static void bubbleSort(int[] arr, int n) {
        //Your code goes here
        boolean check;
        
        for (int i = 0; i < n - 1; i++) {
            check = false;
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    check = true;
                }
            }
            
            if (!check) {
                break;
            }
        }
    }

}