class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        long long sum = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int k = j + 1;
                int l = n - 1;
                while (k < l) {

                    sum = nums[i] + nums[j];
                    sum += nums[k] + nums[l];
                    if (sum == target) {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(nums[l]);
                        ans.push_back(temp);
                        k++, l--;
                        while (k < l && nums[k] == nums[k - 1]) k++;
                    
                    while (k < l && nums[l] == nums[l + 1]) l--;
                    }

                    else if (sum < target) k++;
                    else {
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};