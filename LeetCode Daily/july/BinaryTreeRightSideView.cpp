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
//     void helper(TreeNode* cur, int height,int& maxheight, vector<int>&s)
//     {
//         if(cur == NULL)
//             return ;
        
//         if(height > maxheight)
//         {  s.push_back(cur->val);
//             maxheight= height;
//         }
        
//         helper(cur->right, height+1,maxheight , s);
//         helper(cur->left, height+1,maxheight, s);
//             //reverse preorder
//     }
    
    vector<int> rightSideView(TreeNode* root) {
        // if(root == NULL)
        //     return {};
        // int maxheight =0;
        // vector<int>s;
        // s.push_back(root->val);
        // helper(root, 0,maxheight, s);
        // return s;
         if(root == NULL)
            return {};
        queue<TreeNode *>q;
        q.push(root);
        vector<int>res;
        while(!q.empty())
        {
            int size = q.size();
            for(int i =0 ;i<size ; i++)
            {
                TreeNode* cur = q.front();
                q.pop();
                if(i==size-1) res.push_back(cur->val);
                
                if(cur->left != NULL) q.push(cur->left);                                                                if(cur->right != NULL) q.push(cur->right);

            }
        }
        return res;
    }
};