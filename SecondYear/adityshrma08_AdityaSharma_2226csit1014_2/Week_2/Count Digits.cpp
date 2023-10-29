int countDigits(int n){
	// Write your code here.
	int r,count=0,t;
	t = n;
	while(t!=0){
		r = t%10;
		if(r>0){
		if(n%r==0){
			count ++;
		}
		}
		t = t/10;
	}
		return count;
}