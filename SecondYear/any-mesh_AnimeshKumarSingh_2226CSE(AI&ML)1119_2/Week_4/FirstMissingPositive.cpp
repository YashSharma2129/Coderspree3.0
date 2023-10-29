#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    vector<int> ans;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > 0)
            ans.push_back(arr[i]);
    }
    sort(ans.begin(), ans.end());
    int min = INT_MAX;
    for(int i = 0 ; i < ans.size() ; i++){
        if(ans[i] != i + 1)
            return i + 1;
    }
    return ans.size() + 1;
}
