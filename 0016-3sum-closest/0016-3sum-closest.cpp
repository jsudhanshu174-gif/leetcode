class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int currentDist ;
        int bestDist = INT_MAX;
        int closest ;
        int k = nums.size() - 1;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; i++) {
         int k = nums.size() - 1;
            int j = i + 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                int currentDist = abs(sum - target);

                if (currentDist < bestDist) {
                    bestDist = currentDist;
                    closest = sum;
                }
                if (sum > target)
                    k--;
                else if (sum < target) {
                    j++;
                } else
                    return sum;
            }
        }
        return closest;
    }
};