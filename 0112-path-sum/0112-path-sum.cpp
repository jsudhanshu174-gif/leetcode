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
bool path(TreeNode* root, int sum, int ans) {
if (root == NULL) return false;
    ans += root->val;
    if (root->left == NULL && root->right == NULL) {
        if (ans == sum) return true;
    }
    if (path(root->left, sum, ans)) return true;
    if (path(root->right, sum, ans)) return true;

    return false;
}
bool hasPathSum(TreeNode* root, int targetSum) {
    int ans = 0;
    return path(root, targetSum, ans);
}
};
