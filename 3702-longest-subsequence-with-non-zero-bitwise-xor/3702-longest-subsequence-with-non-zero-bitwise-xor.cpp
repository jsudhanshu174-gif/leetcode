class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int l = 0;
        int r = 1;
        int sum;
        int ans = 0;

        sum = nums[0];
        while (r < nums.size()) {
            sum = sum ^ nums[r] ;
            r++;
        }
        if (sum != 0)
            return nums.size();

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                return nums.size() - 1;
        }
    
    return 0;
  }
};
