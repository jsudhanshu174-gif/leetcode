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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==nullptr){
            return head;
        }
        stack<int>st;
        ListNode*data=head;
        while(data!=NULL){
            st.push(data->val);
            data=data->next;

        }
        ListNode*temp=head;

        while(temp!=NULL){
            temp->val=st.top();
            st.pop();
           temp = temp->next;
        }
        return head;
    }
};