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
    int gcd(int a,int b){
        while(a>0&&b>0){
            if(a>b)a=a%b;
            else b=b%a;
        }
        if(a==0)return b;
        return a;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode* temp=head;
        ListNode* temp1=head->next;
        while(temp1!=NULL){
            int m=gcd(temp->val,temp1->val);
            ListNode* New=new ListNode(m);
            temp->next=New;
            New->next=temp1;
            temp=temp->next->next;
            temp1=temp->next;
        }
        return head;
    }
};