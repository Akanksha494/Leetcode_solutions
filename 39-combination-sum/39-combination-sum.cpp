class Solution {
public:
    void solve(vector<int>&candidates,int target,vector<int>&v,vector<vector<int>>&ans,int ind)
    {
        if(ind==candidates.size())
        {
          if(target==0)
          {
              ans.push_back(v);

          }
            return;
        }
        if(candidates[ind]<=target){
        v.push_back(candidates[ind]);
        solve(candidates,target-candidates[ind],v,ans,ind);
        v.pop_back();
        }
        solve(candidates,target,v,ans,ind+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     vector<vector<int>> ans;
     vector<int> v;
     solve(candidates,target,v,ans,0);
     return ans;   
    }
};