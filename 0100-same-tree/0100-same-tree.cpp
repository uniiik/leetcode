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
    
    
    void dfs(TreeNode* root,vector<int> &s)
    {
        if(!root)
        {s.push_back(0);
        return;}
        dfs(root->left,s);
        dfs(root->right,s);
        s.push_back(root->val);
    }
    
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1;
        vector<int> v2;
        dfs(p,v1);
        dfs(q,v2);
        return v1==v2;

        
    }
};