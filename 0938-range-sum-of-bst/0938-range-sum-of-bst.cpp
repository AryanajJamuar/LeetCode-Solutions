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
    int ctr = 0 ;
    void t(TreeNode* root, int &low, int &high)
    {
        if(root == NULL)
            return ; 
        if(root->val >=low and root->val<=high)
            ctr+=root->val ;
        if(root->left!=NULL)
            t(root->left,low,high) ;
        if(root->right!=NULL)
            t(root->right,low,high) ;
    }
    int rangeSumBST(TreeNode* root, int low, int high) 
    {   
        t(root,low,high ) ;
        return ctr ;
    }
};