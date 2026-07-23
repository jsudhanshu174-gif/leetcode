class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        int index;
        int num;
        for (int i = 0; i < nums.size(); i++) {
            num = abs(nums[i]);
            index = num - 1;
            if (nums[index] < 0) {
                ans = abs(nums[i]);
            }
            nums[index] = -1 * nums[index];
        }
        return ans;
    }
};