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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        map<int, int>inmap; // to get values of inorder
        
        for(int i = 0 ; i < inorder.size() ; i++)
        {
            inmap[inorder[i]] = i;
        }
        
        TreeNode* root = buildTree(preorder, 0 , preorder.size()-1 ,
                                   inorder, 0 , inorder.size()-1, inmap);
    
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>&preorder, int prestart, int preend, 
                       vector<int>&inorder, int instart, int inend, map<int, int>&inmap)
    {
        if( prestart > preend or instart > inend) return NULL;
        
        TreeNode * root = new TreeNode(preorder[prestart]);
        
        int point = inmap[root->val];
        int length = point - instart;
        
        root->left = buildTree(preorder, prestart + 1, prestart + length ,
                              inorder, instart  , point - 1 , inmap);
        
        root->right = buildTree(preorder, prestart +1 +length, preend,
                               inorder, point +1 , inend , inmap);
        return root;
    }
};