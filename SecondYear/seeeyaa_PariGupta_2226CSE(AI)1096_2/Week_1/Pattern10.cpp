//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) 
	{
	    // code here
	    int i,j;
	    for (j = n; j>= 1; j--)
	    {
	      for (i = 1; i <= j; i++)
	      {
	          cout<<i<<' ';
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