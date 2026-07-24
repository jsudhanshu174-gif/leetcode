class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long product = 1;
        int left = 0;
        int right = 0;
        int ans = 0;
      if(nums[0]>k&&nums[0]<100) return 0;
        while (right < nums.size()) {
            product = product * nums[right];

            while (product >= k) {
                product = product / nums[left];
                left++;
            }

            ans += right - left + 1;
            right++;

            
        }
        return ans;
    }
};