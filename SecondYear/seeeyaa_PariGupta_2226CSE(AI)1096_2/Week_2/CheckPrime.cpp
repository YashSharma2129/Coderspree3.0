bool isPrime(int n)
{
	// Write your code here.
	int count=0;
	if (n <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

	for (int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) 
		{
			count+=1;
		}
	}
	if(count==0 && n>0) return 1;
	else return 0;	
}
