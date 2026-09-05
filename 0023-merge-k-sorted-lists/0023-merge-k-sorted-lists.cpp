class Solution {
public:
    ListNode* merge2(ListNode* head1, ListNode* head2) {
        if (head1 == NULL && head2 != NULL)
            return head2;
        if (head1 != NULL && head2 == NULL)
            return head1;
        if (head1 == NULL && head2 == NULL)
            return head2;

        ListNode* Dummpy = new ListNode(-1);
        ListNode* temp = Dummpy;
        while (head1 != NULL && head2 != NULL) {
            if (head1->val < head2->val) {
                temp->next = head1;
                temp = head1;
                head1 = head1->next;
            } else {
                temp->next = head2;
                temp = head2;
                head2 = head2->next;
            }
        }
        if (head1 != NULL) {
            temp->next = head1;
        }
        else{
            temp->next = head2;
        }

        return Dummpy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return NULL;

        ListNode* head = lists[0];
        for (int i = 1; i < lists.size(); i++) {
            head = merge2(head, lists[i]);
        }
        return head;
    }
};