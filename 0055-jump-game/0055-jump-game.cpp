class Solution {
public:
    bool canJump(vector<int>& nums) {
        int end = nums.size() - 1;
        int Max = 0;
        int sum = 0;
        if (nums.size() == 1)
            return true;
        for (int i = 0; i < nums.size(); i++) {
            if (i > Max)
                return false;
            sum = nums[i] + i;
            Max = max(sum, Max);
            if (Max >= end)
                return true;
        }
      return true;
    }
};