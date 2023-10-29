double myPow(double x, int n) {
    // Write Your Code Here
    double res=1.0;
    while(n){
        if(n%2)
        res=n>0?res*x:res/x;
        x=x*x;
        n=n/2;
    }
    return res;
}