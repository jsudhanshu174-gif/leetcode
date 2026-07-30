class Solution {
public:
    void reverse(int st, int end, vector<int>& nums) {
        while (st < end) {
            swap(nums[st], nums[end]);
            st++;
            end--;
        }
        
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
       
        reverse(0, nums.size() - 1, nums);
        reverse(0, k - 1, nums);
        reverse(k, nums.size() - 1,nums);
        
    }
};