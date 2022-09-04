/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
     vector<vector<int>> v;    
    if(root==NULL)
        return v;
  
    map<int,map<int,multiset<int>>> mp;
    queue<pair<TreeNode*,pair<int,int>>> q;
    q.push({root,{0,0}});    
    while(!q.empty())
    {
      auto p=q.front();
      q.pop();
      TreeNode* node = p.first;
      int x=p.second.first, y=p.second.second;
      mp[x][y].insert(node->val);
      if(node->left!=NULL)
      {
          q.push({node->left,{x-1,y+1}});
      }
      if(node->right!=NULL){
          q.push({node->right,{x+1,y+1}});
      }  
         
        
    }
    for(auto it:mp)
    {
        vector<int> col;
        for(auto r:it.second)
        {
            col.insert(col.end(),r.second.begin(),r.second.end());
        }
        v.push_back(col);
    }
        return v;
    }
};