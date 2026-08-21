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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL)
            return NULL;
        if(head->next==nullptr)return head;  
        if(k==0)return head;  
        ListNode* ans = NULL;
        ListNode*count=head;
        int cnt=0;
        while(count!=NULL){
            cnt++;
            count=count->next;
        }
        if(k>=cnt){
        k=k%cnt;
       
        }
        if(k==0)return head;  
        while (k != 0) {
            ListNode* temp = head;
            ListNode* tail = head;
            while (temp->next != nullptr) {
                temp = temp->next;
                if (tail->next->next != nullptr) {
                    tail = tail->next;
                }
            }
            temp->next = head;
            head = temp;
            tail->next = nullptr;
            k--;
            ans = temp;
        }
        return ans;
    }
};