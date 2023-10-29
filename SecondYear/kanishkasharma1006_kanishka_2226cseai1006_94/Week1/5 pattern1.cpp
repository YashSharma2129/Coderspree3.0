#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void printSquare(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
     
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
