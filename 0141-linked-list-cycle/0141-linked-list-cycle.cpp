/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == NULL || head->next == nullptr)
            return NULL;
        map<ListNode*, int> mp;
        ListNode* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            cnt++;
            if (mp.find(temp) != mp.end()) {
                return true;
            }
            mp[temp] = cnt;
            temp = temp->next;
        }
        return false;
    }
};