int traffic(int n, int m, vector<int> arr) {
	// Write your code here.
	int i = 0, j = 0;
	int ans = -1;
	int curr = 0;
	while(j < n){
		if(arr[j] == 0) curr++;
		while(curr > m){
			if(arr[i] == 0) curr--;
			i++;
		}
		ans = max(ans, (j - i + 1));
		j++;
	}
	return ans;
}
