bool checkArmstrong(int n)
{
	//Write your code here
	int n1=n,n2=n,count=0,sum=0,exp,rem;
	if(n<0) return 0 ;
	while(n1!=0)
	{
		n1/=10;
		count++;
	}
	while(n2!=0)
	{
		rem=n2%10;
		exp=pow(rem,count);
		sum+=exp;
		n2/=10;
	}
	if (sum==n) return 1;
	else return 0;


}
