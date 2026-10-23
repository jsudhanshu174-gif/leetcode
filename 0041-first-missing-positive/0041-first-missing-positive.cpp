class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // cleaning
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 0 || nums[i] > nums.size()) {
                nums[i] = nums.size() + 1;
            }
        }
        // indexing
        for (int i = 0; i < nums.size(); i++) {
            int num = abs(nums[i]);
            if (abs(nums[i]) == nums.size() + 1)
                continue;
            if (nums[num - 1] > 0) {
                nums[num - 1] = -nums[num - 1];
            }
        }
        // finding
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                return i + 1;
            }
        }
        return nums.size() + 1;
    }
};