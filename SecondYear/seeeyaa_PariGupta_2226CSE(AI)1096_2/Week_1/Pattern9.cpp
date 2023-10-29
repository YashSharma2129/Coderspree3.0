//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n)
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=1;j<=n-i;j++)
            {
                cout<<'*';
            }
            for(j=2*n;j>2*(n-i);j--)
            {
                cout<<" ";
            }
             for(j=1;j<=n-i;j++)
            {
                cout<<'*';
            }
            cout<<endl;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<'*';
            }
            for(j=2*n;j>2*i;j--)
            {
                cout<<" ";
            }
             for(j=1;j<=i;j++)
            {
                cout<<'*';
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