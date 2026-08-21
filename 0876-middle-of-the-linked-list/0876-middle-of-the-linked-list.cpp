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
    ListNode* middleNode(ListNode* head) {
       if (head==NULL) return NULL;
       if (head->next==nullptr) return head;
       int cnt=0;
       ListNode*count=head;
       while(count!=NULL){
        cnt++;
        count=count->next;

       }
       int node=cnt/2;
       ListNode*temp=head;
       int k=0;
       while(head!=NULL){
        k++;
        if(node+1==k)break;
        head=head->next;
       } 
       return head;
    }
};