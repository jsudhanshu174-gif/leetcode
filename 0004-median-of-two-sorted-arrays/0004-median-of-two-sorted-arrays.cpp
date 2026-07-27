class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int left = 0;
        int right = 0;
        int st = 0;
        vector<int> temp;
        while (left < n && right < m) {
            if (nums1[left] <= nums2[right]) {
                temp.push_back(nums1[left]);
                left++;
            } else {
                temp.push_back(nums2[right]);
                right++;
            }
        }
        while (left < n) {
            temp.push_back(nums1[left]);
            left++;
        }
        while (right < m) {
            temp.push_back(nums2[right]);
            right++;
        }
        int q = temp.size();
        int end = q - 1;
        if (q % 2 == 0) {
            int mid = st + (end - st) / 2;
            float med = (temp[mid] + temp[mid + 1]) / 2.0;
            return med;
        } else {
            int mid = st + (end - st) / 2.0;
            return temp[mid];
        }
        return -1;
    }
};