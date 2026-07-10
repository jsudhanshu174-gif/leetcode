class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
        int right=nums.size()-1;
        int left=i+1;
       
              while(left<right){
        if(nums[i]+nums[left]+nums[right]==0){
             vector<int>temp={nums[i],nums[left],nums[right]};
            ans.push_back(temp);
            while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
            left++;
            right--;
        }
        else if(nums[i]+nums[left]+nums[right]>0) right--;
        else left++;
        }
        }
        return ans;
    }
};