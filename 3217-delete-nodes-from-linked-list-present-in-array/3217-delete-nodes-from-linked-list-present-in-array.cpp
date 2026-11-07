/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int, int> mpp;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        ListNode* temp = head;
        ListNode* temp1 = head;

        while (temp != NULL) {
            if (mpp[temp->val] == 0) {
                ans.push_back(temp->val);
            }
            temp = temp->next;
        }

        if (ans.size() == 0) return NULL;

        for (int i = 0; i < ans.size(); i++) {
            temp1->val = ans[i];

            if (i != ans.size() - 1)
                temp1 = temp1->next;
        }

        temp1->next = NULL;

        return head;
    }
};