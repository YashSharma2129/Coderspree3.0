#include <bits/stdc++.h> 
string encode(string &m)
{
    //   Write your code here.
    string ans = "";
    int i=0;
    while(i<m.size()){
        int count=1;
        ans+=m[i];
        int j= i+1;
        while(m[j]==m[i] && i<m.size()){
            count++;
            j++;
        }
        ans+= to_string(count);
        i+=count;
    }
    return ans;
}
