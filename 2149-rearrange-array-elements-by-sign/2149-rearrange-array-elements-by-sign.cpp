class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int odd = 1, even = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                ans[odd] = nums[i];
                odd += 2;
            } else {
                ans[even] = nums[i];
                even += 2;
            }
        }
        return ans;
    }
};