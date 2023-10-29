long reverseBits(long n) {
    // Write your code here.
    int bin[32] = {0};
    int index = 31;
    while(n!=0){
        bin[index] = n%2;
        n = n/2;
        index--;
    }
    int temp;
    for(int i=0;i<16;i++){
        temp = bin[i];
        bin[i] = bin[31-i];
        bin[31-i] = temp;
    }
    unsigned int ans = 0;
    for(int i = 31,j = 1;i>=0;i--,j*=2){
        ans = ans + j*bin[i];
    }
    return ans;
}