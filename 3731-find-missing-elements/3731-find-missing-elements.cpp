class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int l=0;
        int r=1;
        sort(nums.begin(),nums.end());
        for(int i=1;r<nums.size();i++){
            if(nums[l]==nums[r]-i) r++;
            else ans.push_back(nums[l]+i);
        }
        return ans;
    }
};