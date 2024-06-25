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
    vector <int> a ;
    unordered_map <int,int> mp ;
    void pre(TreeNode *root)
    {
        if(root==NULL)
            return ;
        a.push_back(root->val) ;
        pre(root->left) ;
        pre(root->right) ;
        return ;
    }
    void pre1(TreeNode *root)
    {
        if(root==NULL)
            return ;
        root->val = mp[root->val] ;
         pre1(root->left) ;
         pre1(root->right) ;
    }
    TreeNode* bstToGst(TreeNode* root) 
    {  if(root==NULL)
        return root;
        pre(root) ;
       sort(a.begin(),a.end(),greater <int> ()) ;
     int prev = 0 ;
       for(int i=0;i<a.size();i++)
       { prev+=a[i] ;
        mp[a[i]] = prev ;
           
       }
     pre1(root) ;
     
       return root ; 
    }
};