#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    int n = message.size();
    string ans = "";
    int i = 0;
    while(i < n){
        int count = 1;
        ans += message[i];
        int j = i + 1;
        while(message[j] == message[i] && j < n){
            count++;
            j++;
        }
        ans += to_string(count);
        i += count;
    }
    return ans;
}
