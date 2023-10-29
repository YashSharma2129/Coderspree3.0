vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> ans(n,0); //create a vector of size n and init.with "0"
    for(int i=1;i<n;i++){
        if(i==1){
            ans[i] =1;
        }
        else{
            ans[i] += ans[i-1] +ans[i-2];
        }
    }
    return ans;
}
//code ends here 