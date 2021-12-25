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
    
    void dfs(TreeNode* node, int &sum, int &deepest, int currDepth){
        
        if(node==nullptr){
            return;
        }
        
        if(node->left==nullptr&&node->right==nullptr){
            if(currDepth>deepest){
                deepest=currDepth;
                sum=node->val;
            }else if(currDepth<deepest){
                return;
            }else{
                sum = sum+node->val;
            }
        }
        
        dfs(node->left,sum,deepest,currDepth+1);
        dfs(node->right,sum,deepest,currDepth+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        
        int ans=0;
        int deepest=0;
        int currDepth=0;
        dfs(root,ans,deepest,currDepth);
        
        return ans;
    }
};
