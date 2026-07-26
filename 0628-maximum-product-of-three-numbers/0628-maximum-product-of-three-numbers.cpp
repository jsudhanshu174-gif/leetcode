class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int end = nums.size();
        int prd = 0;
        int ans;
        sort(nums.begin(), nums.end());
        ans = nums[end - 1] * nums[end - 2] * nums[end - 3];
        prd = nums[0] * nums[1] * nums[end - 1];
        ans = max(prd, ans);
        return ans;
    }
};