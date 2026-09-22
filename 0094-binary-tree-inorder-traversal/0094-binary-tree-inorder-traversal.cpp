/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void inorderTraversal1(TreeNode* root, vector<int>& ans) {
        if (root == NULL)return;
        inorderTraversal1(root->left,ans);
        ans.push_back(root->val);
        inorderTraversal1(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderTraversal1(root, ans);
        return ans;
    }
};