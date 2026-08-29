class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;

        unordered_map<int, int> mpp;

        while (r < nums.size()) {

            if (r - l + 1 == k) {

                unordered_map<int, int> temp;

                for (int i = l; i <= r; i++) {
                    temp[nums[i]] = 1;
                }

                for (auto it : temp) {
                    mpp[it.first]++;
                }

                l++;
                r = l;
            } 
            else {
                r++;
            }
        }
        int ans = -1;

        for (auto it : mpp) {
            if (it.second == 1) {
                ans = max(ans, it.first);
            }
        }
        return ans;
    }
};