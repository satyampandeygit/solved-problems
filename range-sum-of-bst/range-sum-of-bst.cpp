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
    
    int sum=0;
    
    void sumKaro(TreeNode* node, int low, int high){
        if(node==nullptr){
            return;
        }
        
        if(node->val>=low&&node->val<=high){
            sum=sum+node->val;
        }
        
        if(node->val>low){
            sumKaro(node->left,low,high);
        }
        
        if(node->val<=high){
            sumKaro(node->right,low,high);
        }
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        sumKaro(root,low,high);
        
        return sum;
    }
};