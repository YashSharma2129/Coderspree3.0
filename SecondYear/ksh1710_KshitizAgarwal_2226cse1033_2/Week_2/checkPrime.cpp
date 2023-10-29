bool isPrime(int n){
	int count=0;
	if(n<=1){
return false;
	}else{
	for(int i=2;i<sqrt(n);++i){
		if(n%i==0){
		count++;
		}
	}
	if(count==0){
		return true;
	}
	else{
		return false;
	}
	}
}
