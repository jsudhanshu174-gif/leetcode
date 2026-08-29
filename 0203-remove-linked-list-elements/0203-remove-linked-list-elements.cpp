class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)return NULL;
        if(head->next==nullptr){
            if(head->val!=val)return head;
            return NULL;
        }
        int k=0;
        while(head!=nullptr&&head->val==val){
            head=head->next;
            k=1;
        }
        // if(k==1)head=head->next;
        ListNode*dummpy=new ListNode(0);
        ListNode*temp=head;
        dummpy->next=head;
        while(temp!=NULL){
            if(temp->val==val){
                dummpy->next=temp->next;
                 temp=temp->next;
                
            }
            else{
                temp=temp->next;
                dummpy=dummpy->next;
            }

        }
    return head;
    }
};