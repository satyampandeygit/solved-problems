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
    vector<int> array;
    
    void inorder(TreeNode* node){
        if(node==nullptr){
            return;
        }
        
        inorder(node->left);
        array.push_back(node->val);
        inorder(node->right);
    }
    
    TreeNode* constructMinHeightBST(int i, int j){
        if(i>j){
            return nullptr;
        }
        
        int m = (i+j)/2;
        
        TreeNode* newNode = new TreeNode(array[m]);
        
        newNode->left = constructMinHeightBST(i,m-1);
        
        newNode->right = constructMinHeightBST(m+1,j);
        
        return newNode;
    }
    
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return constructMinHeightBST(0,array.size()-1);
    }
};