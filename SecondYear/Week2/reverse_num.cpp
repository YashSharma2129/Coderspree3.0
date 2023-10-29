long reverseBits(long n) {
    uint32_t reversedN = 0;
    int numBits = 32; // 32 bits in a uint32_t

    for (int i = 0; i < numBits; i++) {
        reversedN <<= 1;
        if (n & 1) {
            reversedN |= 1;
        }
        n >>= 1;
    }

    return reversedN;
}