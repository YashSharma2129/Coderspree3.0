bool palindrome(int n)
{
    // Write your code here
    int original=n;
    int reverse=0;
    while(n>0)
    {
        int digit=n%10;
        reverse=(reverse*10)+digit;
       n= n/10;

    }
    if(reverse==original) return true;
    else return false;
    
   
}