#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
    int count = 0;
    int open = 0;
    for(int i = 0 ; i < pattern.length() ; i++)
    {
        if(pattern[i] == ')' && open <= 0)
        {
            count++;
        }
        else if(pattern[i] == ')' && open > 0)
        {
            open--;
        }
        else if(pattern[i] == '(')
        {
            open++;
        }
    }
    return count + open;
}
