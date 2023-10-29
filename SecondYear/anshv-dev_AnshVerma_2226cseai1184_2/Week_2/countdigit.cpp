int countDigits(int n){
	// Write your code here.	
	int x=n;
	int count=0;
	int r;
	while(x!=0){
		 r = x%10;
		if(r!=0 && n%r==0){
			count++;
		}
		x/=10;
	}	
	return count;
}