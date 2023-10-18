class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n*2;j++)
            {
                if(j<i+1)
                cout<<j+1<<" ";
                else if(j>=(n*2-1)-i)
                cout<<(n*2-j)<<" ";
                else
                cout<<"  ";
                
            }
            cout<<endl;
        }
    }
};