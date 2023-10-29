//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int> positiveElements, negativeElements;
        
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                positiveElements.push_back(arr[i]);
            }else{
                negativeElements.push_back(arr[i]);
            }
        }
        int idx = 0;
        for(int pos : positiveElements){
            arr[idx] = pos;
            idx++;
        }
        for(int neg: negativeElements){
            arr[idx] = neg;
            idx++;
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends