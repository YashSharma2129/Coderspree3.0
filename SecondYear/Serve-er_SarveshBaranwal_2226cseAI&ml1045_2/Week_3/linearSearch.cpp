#include<bits/stdc++.h>

using namespace std;

 

int linearSearch(int n, int num, vector<int> &arr)
{
    // Write your code here.
      vector<int>::iterator it= find(arr.begin(), arr.end(), num);

 

    if(it != arr.end()) return distance(arr.begin(), it);

    else return -1;
}