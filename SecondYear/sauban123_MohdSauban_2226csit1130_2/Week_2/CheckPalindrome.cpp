bool palindrome(int n)
{
    // Write your code here
    int ans =0;
    int temp =n;  //make a temporary variable
    while(temp>0){
        int rem = temp%10;
        ans = ans*10 +rem;
        temp = temp/10;    
    }
    if(ans==n){
        return true;
    }
    else {
        return false;
    }
}
// code ends here 