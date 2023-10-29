class Solution
{
public:
    
    void solve(vector<int> &arr,int i,vector<int>&ans,int sum){
        if(i>=arr.size()){
            ans.push_back(sum);
            return;
        }
        solve(arr,i+1,ans,sum);
        sum+=arr[i];
        solve(arr,i+1,ans,sum);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int i=0;
        int sum=0;
        vector<int> ans;
        solve(arr,i,ans,sum);
        return ans;
    }
};