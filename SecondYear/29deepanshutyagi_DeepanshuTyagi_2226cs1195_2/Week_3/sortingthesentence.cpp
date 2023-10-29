#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
    string sortSentence(string s) {
      vector<string> words;
    string word;
    for (char c : s) {
      if (c == ' ') {
        words.push_back(word);
        word = "";
      } else {
        word += c;
      }
    }
    words.push_back(word);

    sort(words.begin(), words.end(), [](const string& a, const string& b) {
      return a[a.size() - 1] < b[b.size() - 1];
    });

    string result;
    for (int i = 0; i < words.size() - 1; i++) {
      result += words[i].substr(0, words[i].size() - 1) + " ";
    }
    result += words[words.size() - 1].substr(0, words[words.size() - 1].size() - 1);
    return result;
  
    }
};