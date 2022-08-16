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
class BSTIterator {
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
     find(root);   
    }
    
    int next() {
      TreeNode* cur=st.top();
        st.pop();
       if(cur->right!=NULL)
       {
           find(cur->right);
       }
       return cur->val; 
    }
    
    bool hasNext() {
       if(st.empty())
           return false;
        return true;
    }
    void find(TreeNode* root)
    {
      while(root!=NULL)
      {
          st.push(root);
          root=root->left;
      }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */