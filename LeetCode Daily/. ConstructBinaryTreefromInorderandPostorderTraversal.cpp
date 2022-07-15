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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        map<int, int>inmap;
        
        for(int i =0 ; i< inorder.size(); i++)
        {
            inmap[inorder[i]] = i;
        }
        TreeNode * root = buildTree(inorder, 0, inorder.size()-1, 
                                   postorder, 0, postorder.size()-1, inmap);
        return root;
    }
    
    TreeNode * buildTree(vector<int>&inorder, int instart, int inend, vector<int>&postorder,
                        int poststart, int postend, map<int, int>&inmap)
    {
        if(instart> inend or poststart> postend )return NULL;
           
        TreeNode * root = new TreeNode(postorder[postend]);
           
           int point = inmap[root->val];
           int length = point - instart;
           
           root->left = buildTree(inorder, instart , point -1, 
                                 postorder, poststart, poststart + length-1 , inmap);
           root->right = buildTree(inorder, point +1, inend,
                                  postorder,poststart + length, postend-1, inmap);
         return root;
    }
};