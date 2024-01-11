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
    int ans= 0;
    void pre(TreeNode *root, int mx,int mi)
    {
        if(abs(mx-root->val)>ans)
            ans = abs(mx-root->val) ;
        if(abs(mi-root->val)>ans)
            ans = abs(mi-root->val) ;
        if(root->val>mx)
            mx = root->val ;
        if(root->val<mi)
            mi = root->val ;
        if(root->left)
            pre(root->left,mx,mi) ;
        if(root->right)
            pre(root->right,mx,mi) ;
    }
    int maxAncestorDiff(TreeNode* root) 
    { 
        if(root==NULL)
            return 0 ;
        int x = root->val ;
        if(root->left)
        pre(root->left,x,x) ;
        if(root->right)
        pre(root->right,x,x) ;
        return ans ;
    }
};