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
    int ans =0 ;
    
    void sum(TreeNode* ptr,int cur)
    {
    if(ptr->left == NULL and ptr->right == NULL)
        {  cur*=10 ;
        cur+=ptr->val ;
            ans+=cur ;
         return ;
        }
        cur*=10 ;
        cur+=ptr->val ;
        if(ptr->left!=NULL)
        sum(ptr->left,cur) ;
        if(ptr->right!=NULL)
        sum(ptr->right, cur) ;
        
        
        
    }
    int sumNumbers(TreeNode* root) 
    {
        sum(root, 0 ) ;
        return ans ;
            
        
    }
   
};