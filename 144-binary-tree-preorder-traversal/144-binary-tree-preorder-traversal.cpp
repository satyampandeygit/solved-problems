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
    
    vector<int> trav;
    
    void utilFun(TreeNode* root){
        if(root==nullptr){
            return;
        }
        
        trav.push_back(root->val);
        utilFun(root->left);
        utilFun(root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        utilFun(root);
        return trav;
    }
};