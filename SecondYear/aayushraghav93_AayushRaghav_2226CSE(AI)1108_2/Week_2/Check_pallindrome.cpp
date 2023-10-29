bool palindrome(int n)
{
    int rev=0;
    int temp=n;
    // Write your code here
    while(n!=0){
        rev=(rev*10)+(n%10);
        n=n/10;

    }
    if(rev==temp)
    return true;

    return false;
}