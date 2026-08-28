class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL||head->next==nullptr)
            return NULL;

        ListNode* dummpy = new ListNode(0);
        dummpy->next = head;
        ListNode* temp = head;
        ListNode* count = head;
        int cnt = 0;
        while (count != NULL) {
            cnt++;
            count = count->next;
        }
        cnt = cnt / 2;
        int k = 0;
        while (temp != NULL) {
            k++;
            if (k == cnt ) {
                head->next = head->next->next;
                break;
            }
            temp = temp->next;
            head = head->next;
        }
        //delete temp;
        return dummpy->next;
    }
};