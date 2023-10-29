class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t x = haystack.find(needle);
        if(x == string::npos)
            return -1;
        return x;
    }
};