class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int h = str.size()-1;
        int l=0;
        while(l<=h){
            swap(str[l],str[h]);
            l++;
            h--;
        }
        return str;
        
    }
};
