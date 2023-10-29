int countDigits(int n){
	// Write your code here.
		int count=0;
		int num;
		num=n;

	while(n!=0)
	{
    int digit=n%10;
	if(digit!=0)
	{
if(num%digit==0)
	{
        count++; 
	}
	
	}
	
	n=n/10;
	 
	}
	

return count;	
}