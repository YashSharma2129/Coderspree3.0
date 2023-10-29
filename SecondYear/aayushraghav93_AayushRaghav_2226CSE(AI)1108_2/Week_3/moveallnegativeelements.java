class Solution {
    
    public void segregateElements(int arr[], int n)
    {
        // Your code goes here
         int[] temp = new int[n];
        int posIndex = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                temp[posIndex] = arr[i];
                posIndex++;
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                temp[posIndex] = arr[i];
                posIndex++;
            }
        }

        // Copy the rearranged elements back to the original array
        System.arraycopy(temp, 0, arr, 0, n);
    }
}