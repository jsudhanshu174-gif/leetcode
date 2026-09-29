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
    void coverto1D(TreeNode*root,vector<int>&ans){
        root->left=NULL;
        root->right=NULL;
        TreeNode* temp=root;
        for(int i=1;i<ans.size();i++){
            TreeNode* New=new TreeNode(ans[i]);
            temp->right=New;
            temp=temp->right;
            
        }
    }
    void depth(TreeNode*root,vector<int>&ans){
        if(root==NULL)return;
        ans.push_back(root->val);
        depth(root->left,ans);
        depth(root->right,ans);
    }
    
    void flatten(TreeNode* root) {
        if(root==NULL||root->left==NULL&&root->right==NULL)return;
        vector<int>ans;
        depth(root,ans);
        coverto1D(root,ans);

    }
};