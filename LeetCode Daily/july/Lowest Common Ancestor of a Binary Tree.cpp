/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
// Time complexity O(H)
        if(root == NULL) return NULL; //1
        
        if(root->val ==p->val or root->val == q->val ) return root; //2

        
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        
        if(left and right ) return root;  //3
        
        return left!=NULL?left:right; //4
    }
};