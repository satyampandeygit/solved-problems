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
    int deepestLeavesSum(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        
        queue<TreeNode*> levelOrderTrav;
        queue<TreeNode*> storeChilds;
        queue<TreeNode*> emp;
        
        int ans=0;
        
        levelOrderTrav.push(root);
        
        while(true){
            
            TreeNode* temp = levelOrderTrav.front();
            levelOrderTrav.pop();
            
            ans=ans+temp->val;
            
            if(temp->left!=nullptr)storeChilds.push(temp->left);
            if(temp->right!=nullptr)storeChilds.push(temp->right);
            
            
            if(levelOrderTrav.empty()){
                if(storeChilds.empty()){
                    return ans;
                }else{
                    ans=0;
                    levelOrderTrav=storeChilds;
                    storeChilds=emp;
                }
            }
            
        }
    }
};