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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            int k=0;
       if(n>0){ 
        ListNode*count=head;
        
        while(count!=NULL){
            k++;
            count=count->next;
        }
       }
      int q=k-n+1;

     if(head==NULL||head->next==nullptr)return NULL;
     if(q==1) {
        ListNode*temp=head;
        head=head->next;
       delete temp;
        return head;
     }  

     int cnt=0;
     ListNode*temp=head;
     ListNode* prev=nullptr;
     while(temp!=nullptr){
        cnt++;
        if(cnt==q){
            prev->next=prev->next->next;
        }
        prev=temp;
        temp=temp->next;

     }
     return head;
    }
};