#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
           int i,j;
        for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<"*";
        }
        for(j=i;j>1;j--){
            cout<<" ";
        }
        for(j=i;j>1;j--){
            cout<<" ";
        }
        for(j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=n;j>i;j--){
            cout<<" ";
        }
        for(j=n;j>i;j--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    
    }
    }    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}