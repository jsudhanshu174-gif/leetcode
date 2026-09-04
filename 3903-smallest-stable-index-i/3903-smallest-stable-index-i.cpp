class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans1, ans2 = -1;
        int ans = INT_MAX;
        int i = 0;
        while (i < nums.size()) {
            int Max = INT_MIN;
            int Min = INT_MAX;
            int j = 0;
            while (j <= i) {
                if (nums[j] > Max)
                    Max = nums[j];
                j++;
            }
            int p = i; 
            while (p < nums.size()) {
                if (nums[p] < Min)
                    Min = nums[p];
                p++;
            }
            int st = Max - Min;

            if (st <= k) {
                ans2 = i;
                break;     
            }
            i++;
        }
        return ans2;
    }
};