class Solution {
public:
   void re(int index,vector<int>&nums,set<vector<int>>&ans){
    if(index==nums.size()){
        ans.insert(nums);
        return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        re(index+1,nums,ans);
        swap(nums[index],nums[i]);
    }
   }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>ans;
        re(0,nums,ans);
        vector<vector<int>> st(ans.begin(),ans.end());
        return st;
    }
};