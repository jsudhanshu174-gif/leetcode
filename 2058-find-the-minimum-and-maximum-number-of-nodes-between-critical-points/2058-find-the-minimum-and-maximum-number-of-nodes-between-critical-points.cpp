class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head == NULL || head->next == nullptr)
            return {-1, -1};

        vector<int> ans;

        ListNode* temp = head;
        int data = temp->val;

        temp = temp->next;

        int pos = 1;

        while (temp->next != nullptr) {

           
            if (temp->val > data && temp->val > temp->next->val) {
                ans.push_back(pos);
            }

         
            else if (temp->val < data && temp->val < temp->next->val) {
                ans.push_back(pos);
            }

            data = temp->val;
            temp = temp->next;
            pos++;
        }

      
        if (ans.size() < 2)
            return {-1, -1};

        int mini = INT_MAX;

        for (int i = 1; i < ans.size(); i++) {
            mini = min(mini, ans[i] - ans[i - 1]);
        }

        int maxi = ans.back() - ans.front();

        return {mini, maxi};
    }
};