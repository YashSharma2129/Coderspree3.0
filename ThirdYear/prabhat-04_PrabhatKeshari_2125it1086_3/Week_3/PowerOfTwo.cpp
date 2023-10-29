class Solution {
public:
    bool isPowerOfTwo(int n) {
         return n && !(n & (n-1l));
    }
};