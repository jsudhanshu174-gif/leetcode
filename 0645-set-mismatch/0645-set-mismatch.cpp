class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int num;
        int index;
        int ans2;
        int sum = 0;
        int n = nums.size();
        int a;
        int total_sum = (n * (n + 1)) / 2;
        for (int i = 0; i < nums.size(); i++) {
            sum += abs(nums[i]);
            num = abs(nums[i]);
            index = num - 1;

            if (nums[index] < 0) {
                a = abs(nums[i]);
                ans.push_back(abs(nums[i]));
            }
            nums[index] = -1 * nums[index];
        }
        ans2 = (total_sum - sum) + a;
        ans.push_back(ans2);

        return ans;
    }
};
