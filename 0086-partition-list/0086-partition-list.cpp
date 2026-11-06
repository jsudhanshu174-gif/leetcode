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
    ListNode* partition(ListNode* head, int x) {
        if (head == NULL || head->next == NULL)
            return head;
        vector<int> ans;
        vector<int> ans1;
        ListNode* temp = head;
        ListNode* temp1 = head;
        while (temp != NULL) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] < x) {
                ans1.push_back(ans[i]);
                ans[i] = -300;
            }
        }
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != -300) {
                ans1.push_back(ans[i]);
            }
        }
        int i = 0;
        while (temp1 != NULL) {
            temp1->val = ans1[i];
            temp1 = temp1->next;
            i++;
        }

        return head;
    }
};