#include <iostream>
#include<vector>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    string str = "";
    vector<string> word;
    for(int i=0 ;i<input.size();i++){
        if(input[i] == ' '){
            word.push_back(str);
            word.push_back(" ");
            str.clear();
            
        }
        else {
            str+=input[i];
        }
    }
    word.push_back(str);
    //clear the string 
    str.clear();
    
    for(int i=word.size()-1;i>=0;i--){
        str+=word[i];
    }
    return str;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
