#include <bits/stdc++.h> 

void selectionSort(vector<int>& arr, int n)

{   

    // Write your code here.

    for(int i=0;i<n-1;i++){

        int minidx = i;

        for(int j=i+1;j<n;j++){

            if(arr[minidx] > arr[j]){

                minidx = j;

            }

        }

        swap(arr[minidx],arr[i]);

    }

}
