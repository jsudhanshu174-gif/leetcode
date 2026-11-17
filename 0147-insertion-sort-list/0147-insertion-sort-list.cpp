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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
       ListNode* temp=head;
        ListNode* temp1=head;
       vector<int>ans;
       while(temp!=NULL){
        ans.push_back(temp->val);
        temp=temp->next;
       } 
       sort(ans.begin(),ans.end());
       int i=0;
       while(temp1!=NULL){
        temp1->val=ans[i];
        i++;
        temp1=temp1->next;
       }

       return head;
    }
};