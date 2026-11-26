class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int Min = INT_MAX;
        priority_queue<int> pq;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0)
                nums[i] = nums[i] * 2;
            pq.push(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            if (Min > nums[i])
                Min = nums[i];
        }
        int ans = INT_MAX;
        do {
            int max = pq.top();
            ans = min(ans, max - Min);
            pq.pop();
            pq.push(max / 2);
            Min = min(Min, max / 2);
        } while (pq.top() % 2 == 0);

        ans = min(ans, pq.top() - Min);

        return ans;
    }
};