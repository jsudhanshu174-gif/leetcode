class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)return nums.size();
        int ans=2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[ans-2]){
                nums[ans]=nums[i];
                ans++;
            }
        }
        return ans;
    }
};
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int n = nums.size();

//         if (n <= 2) return n;

//         int j = 2;

//         for (int i = 2; i < n; i++) {
//             if (nums[i] != nums[j - 2]) {
//                 nums[j] = nums[i];
//                 j++;
//             }
//         }

//         return j;
//     }
// };