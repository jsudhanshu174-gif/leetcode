class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int num;
        int index;
        for (int i = 0; i < nums.size(); i++) {
            num = abs(nums[i]);
            index = num - 1;
            if (nums[index] > 0) {
                nums[index] = -1 * nums[index];
            } else {

                ans.push_back(abs(nums[i]));
            }
        }
        return ans;
    }
};