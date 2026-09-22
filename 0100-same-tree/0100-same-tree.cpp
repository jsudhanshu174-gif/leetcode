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
    void tran(TreeNode* root, vector<pair<bool, int>>& ans) {
        if (root == NULL) {
            ans.push_back({false, 0});
            return;
        }

        ans.push_back({true, root->val});
        tran(root->left, ans);
        tran(root->right, ans);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<pair<bool, int>> ans;
        vector<pair<bool, int>> ans1;

        tran(p, ans);
        tran(q, ans1);

        if (ans.size() != ans1.size())
            return false;

        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != ans1[i])
                return false;
        }

        return true;
    }
};