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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL)
            return NULL;
        int level=0,a=0;
        int max=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            int sum=0;
            while(n--)
            {
                TreeNode* node = q.front();
                q.pop();
                sum+=node->val;
                if(node->left!=NULL)
                {
                  q.push(node->left);  
                }
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
            
            }
            level++;
            if(sum>max)
            {
                max=sum;
                a=level;
            }
        }    
        return a;
    }
};