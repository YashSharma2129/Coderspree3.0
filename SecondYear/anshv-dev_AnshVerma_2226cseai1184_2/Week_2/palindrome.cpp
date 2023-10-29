bool palindrome(int n)
{
    // Write your code here
   int r;
   int sum=0;
   int x=n;
   while(x!=0){
       r=x%10;
       sum=sum*10+r;
       x/=10;
   }
   if(sum==n){
       return true;
   }
   else{
       return false;
   }
}