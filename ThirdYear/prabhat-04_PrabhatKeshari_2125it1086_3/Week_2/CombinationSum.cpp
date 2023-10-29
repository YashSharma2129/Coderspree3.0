class Solution {
public:
    map<vector<int>,int>map;
    void combination(vector<int>& candidates, int target,vector<vector<int>>&ans, vector<int>currans) {
        if(target<0){
            return ;
        }      
        if(target==0){
            sort(currans.begin(),currans.end());
            if(!map[currans]){
                ans.push_back(currans); 
                map[currans]++;
            }
           return ;
        }
        for(int i=0;i<candidates.size();i++){
          currans.push_back(candidates[i]);
          combination(candidates,target-candidates[i],ans,currans); 
           currans.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

         vector<vector<int>>ans;
         vector<int>currans;
         combination(candidates,target,ans,currans);
         return ans;
    }
};