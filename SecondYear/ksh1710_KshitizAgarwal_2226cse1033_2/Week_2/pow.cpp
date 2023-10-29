double myPow(double x, int n) {
    double ans=1;
    if(n==0){
        return 1;
    }
    else if(n==1){
        return x;
    }
    else if(n<0){
        while(abs(n)){
       ans=ans*x;
            n++;
        }
        return 1/ans;
    }
    else{
        while(n){
            ans=ans*x;
            n--;
        }
        return ans;
    }
}