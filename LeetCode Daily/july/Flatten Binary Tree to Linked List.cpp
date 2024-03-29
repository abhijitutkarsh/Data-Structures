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
    void flatten(TreeNode* root) {
//         if(root == NULL) return ;
        
//         TreeNode* tempright = root->right;
//         TreeNode* templeft = root -> left;
        
        
//         root->left = NULL;
        
//         flatten(templeft);
//         flatten(tempright);
       
//         TreeNode* current = root;
//         current->right = templeft;
//         while(current->right)
//         {
//             current= current->right;
//         }
//         current->right = tempright;
        
        //Morries traversal
        
        if(root== NULL ) return ;
        
        while(root != NULL)
        {
            if(root->left){
                
            TreeNode* left = root->left;
            TreeNode* current = left;
            
            while(current->right)
            {
                current = current->right;
            }
            current->right = root->right;
            root->left = NULL;
            root->right = left;
            }
            root = root->right;
        }
        
        
    }
};