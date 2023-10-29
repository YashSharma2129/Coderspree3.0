void solve(int i,int n,vector<int>&ans)
{
    if(i>n)
    return ;

    ans.push_back(i);
    solve(i+1,n,ans);
}
vector<int> printNos(int x) {
   vector<int>ans;
   solve(1,x,ans);
   return ans;
}