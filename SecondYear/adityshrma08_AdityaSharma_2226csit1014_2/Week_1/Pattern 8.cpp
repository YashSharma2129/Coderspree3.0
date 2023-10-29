//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for (int i = 1; i <= n; i++) {
            
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }

        for (int j = 1; j <=4*(n- i); j++) {
            std::cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            std::cout << j << " ";
        }

        std::cout << std::endl;
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