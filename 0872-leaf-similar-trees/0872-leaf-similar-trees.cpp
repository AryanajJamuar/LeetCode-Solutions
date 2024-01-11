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
    vector <int> tree1 ;
      vector <int> tree2 ;
    void pre1(TreeNode * root)
    {
        if(root->left==NULL and root->right==NULL)
            tree1.push_back(root->val) ;
        if(root->left)
            pre1(root->left) ;
        if(root->right)
            pre1(root->right) ;
    }
    void pre2(TreeNode * root)
    {
        if(root->left==NULL and root->right==NULL)
            tree2.push_back(root->val) ;
        if(root->left)
            pre2(root->left) ;
        if(root->right)
            pre2(root->right) ;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    { pre1(root1) ;
     pre2(root2) ;
     return tree1==tree2 ;
        
    }
};