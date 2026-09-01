class Solution {
public:
    ListNode* reverse(ListNode* head, int right, int k){
   
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* front = NULL;

        while(temp != NULL && k <= right){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
            k++;
        }
        head->next = temp;  
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == NULL || head->next == nullptr)
            return head;
        ListNode dummy(0);
        dummy.next = head;
        ListNode* temp = &dummy;
        int cnt = 0;
        int k = 0;
        while(temp->next != NULL){
            cnt++;
            k++;
            if(cnt == left){
                temp->next = reverse(temp->next, right, k);
                break;
            }
            temp = temp->next;
        }
        return dummy.next;
    }
};