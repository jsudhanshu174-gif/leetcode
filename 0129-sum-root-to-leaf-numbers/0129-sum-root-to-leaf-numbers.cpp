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
    void tran(TreeNode* root, vector<int>& temp, int& num) {
        if (root == NULL)
            return;
            int prev=num;
        num = (num * 10) + root->val;
        if (root->right == NULL && root->left == NULL) {
            temp.push_back(num);
            num=prev;
            return;
        }

        tran(root->left, temp, num);
        tran(root->right, temp, num);
       num=prev;
    }
    int sumNumbers(TreeNode* root) {
        if (root == NULL)
            return 0;
        int num = 0;
        vector<int> temp;

        tran(root, temp, num);
        long long ans = 0;
        for (int i = 0; i < temp.size(); i++) {
            ans += temp[i];
        }
        return ans;
    }
};