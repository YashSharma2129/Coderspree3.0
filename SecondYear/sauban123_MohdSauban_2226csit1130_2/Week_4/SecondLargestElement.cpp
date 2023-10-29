#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    if(n<2)  return -1;
    int max1=arr[0];
    for(int i=0 ;i<n;i++){
        max1= max(max1,arr[i]);
    }
    int ans= INT_MIN;
    for(int i=0 ;i<n;i++){
        if(arr[i]<max1){
            ans = max(ans,arr[i]);
        }
    }
    if(ans !=INT_MIN)   return ans;
    else 
       return -1;
}
