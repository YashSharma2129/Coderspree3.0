#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
          for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        for(int i=n;i>0;i--){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*"<<" ";
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
        ob.printDiamond(n);
    }
    return 0;
}