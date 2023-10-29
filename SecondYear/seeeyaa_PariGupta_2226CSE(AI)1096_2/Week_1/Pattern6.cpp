//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) 
    {
        // code here
        int i,j;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                cout<<' ';
            }
             for(j=1;j<=2*i-1;j++)
            {
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
// } Driver Code Ends