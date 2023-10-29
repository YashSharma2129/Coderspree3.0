public class selectionsort {
	public static void selectionSort(int arr[], int n) {
		// Write your code here.
		for(int i =0; i<arr.length-1;i++){
			int min = arr[i];
			int minIndex = i;
			for(int j = i+1; j<arr.length; j++){
				if(arr[j]<min){
					min = arr[j];
					minIndex = j;
				}
			}
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}