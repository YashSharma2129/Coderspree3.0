int countDigits(int n)
{
	// Write your code here.
	int n1=n,count =0,rem;
	while(n1!=0)	
	{
		rem=n1%10;
        if (rem != 0 && n % rem == 0) 
		{
           count += 1;
        }   
        n1/=10;   
	}
	return count;
}