class Solution {
  public:
    void printTriangle(int n) {
        // code here
         int space=(4*(n-1))+1;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=i;j++)
           {
               cout<<j<<" ";
           }
           for(int j=1;j<space;j++)
           {
               cout<<" ";
           }
           for(int j=i;j>=1;j--)
           {
               cout<<j<<" ";
           }
           cout<<endl;
           space-=4;
       }
    
    }
};