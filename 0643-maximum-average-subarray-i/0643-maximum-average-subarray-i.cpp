class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double val = INT_MIN;
        int left = 0;
        int right = 0;
        int sum = 0;

        double num=0;
      
         while (right < nums.size()) {
            sum = sum + nums[right];
            if (right >= k-1) {
                num = sum;
                num = num / k;
                val = max(val, num);
                sum = sum - nums[left];
                left++;
               
            }
            right++;
        }
        return val;
    }
};