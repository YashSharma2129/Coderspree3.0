#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    for(int i = 0 ; i < n - 1 ; i++){
        swap(arr[i], arr[i + 1]);
    }
    return arr;
}
