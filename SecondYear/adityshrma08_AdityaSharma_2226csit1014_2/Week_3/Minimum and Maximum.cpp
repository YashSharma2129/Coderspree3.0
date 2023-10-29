//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    
    long long minVal = LLONG_MAX;
    long long maxVal = LLONG_MIN;
    
    for(int i=0;i<n;i++){
        minVal = min(minVal, a[i]);
        maxVal = max(maxVal, a[i]);
    }
    
    return make_pair(minVal, maxVal);
    
}