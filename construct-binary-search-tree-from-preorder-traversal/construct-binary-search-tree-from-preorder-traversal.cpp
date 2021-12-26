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
    
    void findPos(TreeNode* root, int val){
        TreeNode* newNode;
        
        if(val<root->val){
            if(root->left==nullptr){
                newNode= new TreeNode(val);
                root->left=newNode;
            }else{
                findPos(root->left,val);
            }
        }else{
            if(root->right==nullptr){
                newNode=new TreeNode(val);
                root->right=newNode;
            }else{
                findPos(root->right,val);
            }
        }
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        TreeNode* root = new TreeNode(preorder[0]);
        
        for(int i=1; i<preorder.size(); i++){
            findPos(root,preorder[i]);
        }
        
        return root;
    }
};