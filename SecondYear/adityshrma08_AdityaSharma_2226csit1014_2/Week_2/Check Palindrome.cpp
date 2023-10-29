bool palindrome(int n)
{
    // Write your code here
    int rev=0,temp,digit;
    temp=n;
    while(n>0){
        digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    if(rev==temp){
        return true;
    }
    else
    return false;
}