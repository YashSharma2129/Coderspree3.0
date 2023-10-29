long reverseBits(long n){
    vector<int> bits(32, 0);

    for(int i=0;i<32;i++){

        if ((n & (long)1 << i) > 0){
            bits[i] = 1;
        }
    }
    for(int i=0;i<16;i++){
        swap(bits[i],bits[31-i]);
    }
    long ans = 0;

    for(int i=0;i<32;i++){
        // If the i'th bit is set.
        if (bits[i] == 1){
            ans += (long)1 << i;
        }
    }
    return ans;
}