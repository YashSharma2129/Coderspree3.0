#include <bits/stdc++.h>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    vector<string> x;
    string s = "";
    for(int i = 0 ; i < input.length() ; i++){
        if(input[i] == ' ')
        {
            x.push_back(s);
            x.push_back(" ");
            s.clear();
        }
        else
            s += input[i];
    }
    x.push_back(s);
    s.clear();
    for(int i = x.size() - 1 ; i >= 0 ; i--)
    {
        s += x[i];
    }
    return s;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
