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
    int sum = 0;

    void sumbtree(TreeNode* root, int low, int high){
        if(root == nullptr){return;}

        if (root->val < low)
            sumbtree(root->right, low, high);

        else if (root->val > high)
            sumbtree(root->left, low, high);

        else {
            sum += root->val;
            sumbtree(root->left, low, high);
            sumbtree(root->right, low, high);
}

    }

    int rangeSumBST(TreeNode* root, int low, int high) {

        sumbtree(root,low,high);
        return sum;

    }
};