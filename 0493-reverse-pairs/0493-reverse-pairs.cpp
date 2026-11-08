class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }
        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }
    int countpair(vector<int>& nums, int low, int mid, int high) {
        int right = mid + 1;
        int cnt = 0;
        for (int i = low; i <= mid; i++) {
            while (right <= high && nums[i] > 2LL * nums[right])
                right++;
            cnt += right - (mid + 1);
        }
        return cnt;
    }
    int ms(vector<int>& nums, int low, int high) {
          int cnt = 0;
        if (low >= high)
            return cnt;
        int mid = (low + high) / 2;
   
        cnt += ms(nums, low, mid);
        cnt += ms(nums, mid + 1, high);
        cnt += countpair(nums, low, mid, high);
        merge(nums, low, mid, high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) { return ms(nums, 0, nums.size() - 1); }
};