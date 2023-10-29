int countDigits(int n){
	int c=0,d,cpy;
	cpy=n;
	while(cpy){
		d=cpy%10;
		if(d!=0 && n%d==0){
			c++;
		}
		cpy=cpy/10;
	}
	return c;
}