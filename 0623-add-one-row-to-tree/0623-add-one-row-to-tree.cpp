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
    void rec(TreeNode* root, int val , int depth, int i )
    {
        if(i==depth-1)
        {   cout<<root->val<<endl  ;
            cout<<i ;
            TreeNode* l = root->left ;
            TreeNode* r = root->right ;
            TreeNode * lnode = new TreeNode(val) ;
            TreeNode * rnode = new TreeNode(val) ;
            
            {
                root->left = lnode ;
                if(root->left!=NULL)
                lnode->left = l ;
            }
            
            {
                root->right = rnode ;
                if(root->right!=NULL)
                rnode->right = r ;
            }
            return ;
        }
        i++ ;
        if(root->left!=NULL)
            rec(root->left,val,depth,i) ;
        if(root->right!=NULL)
              rec(root->right,val,depth,i) ;
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth!=1)
        rec(root,val,depth,1) ;
        else 
        {
            TreeNode *newroot = new TreeNode(val) ;
            TreeNode *oldroot = root ;
            root = newroot ;
            newroot->left = oldroot ;
        }
        
        return root ;
        
    }
};