#include<bits/stdc++.h>

using namespace std;

int search(vector<int> &nums, int target) {
    // Write your code here.
    int i=0;

    while(nums[i]<=target){

        if(target == nums[i]) return i;

        i++;

    }

    return -1;
}