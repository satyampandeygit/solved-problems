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
    
    void reverseInorder(TreeNode* node, int &cnt){
        if(node==nullptr){
            return;
        }
        
        reverseInorder(node->right,cnt);
        
        node->val=node->val+cnt;
        cnt=node->val;
        
        reverseInorder(node->left,cnt);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        int cnt=0;
        
        reverseInorder(root,cnt);
        
        return root;
    }
};