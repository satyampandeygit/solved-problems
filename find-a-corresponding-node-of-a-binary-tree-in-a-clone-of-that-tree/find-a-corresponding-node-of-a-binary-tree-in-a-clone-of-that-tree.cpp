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
    
    TreeNode* dfs(TreeNode* node, TreeNode* clonedNode, TreeNode* target, bool &found){
        if(node==nullptr){
            return nullptr;
        }
        
        if(node==target){
            found=true;
            return clonedNode;
        }
        
        TreeNode* ans=nullptr;
        
        if(node->left!=nullptr){
            ans = dfs(node->left,clonedNode->left,target,found);
            if(found){
                return ans;
            }
        }
        
        if(node->right!=nullptr){
            ans = dfs(node->right,clonedNode->right,target,found);
            if(found){
                return ans;
            }
        }
        
        return nullptr;
        
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        bool found=false;
        return dfs(original,cloned,target,found);
    }
};