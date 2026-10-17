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
    void insertbst(TreeNode* root, int val, TreeNode* node){

        

         if(val > root->val){
            if(root->right == nullptr){
                root->right = node;
                return;
            }
            else
                insertbst(root->right,val,node);
        }
        if(val < root->val){
            if(root->left == nullptr){
                root->left = node;
                return;
            }
            else
                insertbst(root->left,val,node);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node = new TreeNode(val);

        if(root == nullptr){return node;}

        insertbst(root,val,node);
        return root;
    }
};