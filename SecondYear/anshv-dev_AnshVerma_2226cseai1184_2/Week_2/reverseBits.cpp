long reverseBits(long n) {
    // Write your code here.
    int T;
    for(int i=0;i<T;i++){
        unsigned int ans=0;
        int position=0;
        while(n!=0){
            if(n%2){
                ans=ans+(1<<(31-position));
            }
            n=n>>1;
            position++;
        }
       return ans;
        
    }
}