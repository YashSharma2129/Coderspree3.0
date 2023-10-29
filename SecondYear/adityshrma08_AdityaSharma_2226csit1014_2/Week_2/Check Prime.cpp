bool isPrime(int n)
{
	// Write your code here.
	int count=0;
	if(n<=1){
		return false;
	}
	for(int i=2;i*i<n;i++){
		if(n%i==0){
			count=1;
			break;
		}
		else{
			count=0;
		}
	}
		if(count==1){
			return false;
		}
		else
		return true;
	
}
