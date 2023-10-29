//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n)
    {
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n - i; j++)
            { 
                cout << " ";
            }
            for (j = 1; j <= i ; j++)
            {
                cout << "* ";
            }
           cout << endl;
        }
        for (i = n ; i >= 1; i--) 
        {
            for (j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (j = 1; j <=  i ; j++) 
            {
                cout << "* ";
                
            }
           cout << endl;
            
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
// } Driver Code Ends