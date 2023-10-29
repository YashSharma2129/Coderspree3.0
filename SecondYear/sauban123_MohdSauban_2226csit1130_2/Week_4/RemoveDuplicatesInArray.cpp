int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int l = 0;
	int m = 0;
	while(l<n){
		if(arr[l] ==arr[l+1]){
			l++;
		}
		else {
			arr[m] = arr[l];
			l++;
			m++;
		}
	}
	return m;
}
