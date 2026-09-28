
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* prev = NULL;
        ListNode* front = NULL;

        while (temp1 != NULL) {
            front = temp1->next;
            temp1->next = prev;
            prev = temp1;
            temp1 = front;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 1)
            return head;
        ListNode* temp = head;
        ListNode* temp1 = head;
        ListNode* prev = NULL;
        int t = 0;
        int r = 0;
        while (temp != NULL) {
            ListNode* dummpy = NULL;
            if (r == k - 1) {
                dummpy = temp->next;
                temp->next = NULL;
                reverse(temp1);
                if (t == 0) {
                    head = temp;
                    t++;
                }else{
                    prev->next=temp;
                }
                prev=temp1;
                temp1->next = dummpy;
                temp = dummpy;
                temp1 = dummpy;
                r=0;
            }
            r++;
            if(temp!=NULL){
            temp = temp->next;
            }
        }

        return head;
    }
};