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
    bool travel(TreeNode* root, long long low, long long high) {
        if (root == NULL) return true;

        if (root->val <= low || root->val >= high) return false;

        return travel(root->left, low, root->val) &&
               travel(root->right, root->val, high);
    }

    bool isValidBST(TreeNode* root) {
        return travel(root, LLONG_MIN, LLONG_MAX);
    }
};