bool palindrome(int n)
{
    // Write your code here
    int n1=n,rem,revnum=0;
    while(n>0)
    {
        rem=n%10;
        revnum=revnum*10+rem;
        n/=10;
    }
    if(n1==revnum) return 1;
    return 0;

    
}