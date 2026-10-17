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
    vector<int> vec1;
    vector<int> vec2;

    void leaf(TreeNode* root , vector<int>& leafs){
        if(root == nullptr){return;}

        if(root->left == nullptr && root->right == nullptr){
            leafs.push_back(root->val);
            return;
        }

        leaf(root->left , leafs);
        leaf(root->right , leafs);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leaf(root1,vec1);
        leaf(root2,vec2);

        return vec1 == vec2 ;
        
    }
};
