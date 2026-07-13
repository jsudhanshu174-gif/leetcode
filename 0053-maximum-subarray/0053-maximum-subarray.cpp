class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long curtsum=0;
        long maxi=INT_MIN;
         if(nums.size()==1){
            maxi=nums[0];
            return maxi;
         }


        
        for(int i=0;i<nums.size();i++){
            curtsum+=nums[i];
            maxi=max(maxi,curtsum);
            if(curtsum<0){
                curtsum=0;
            }
        }
        return maxi;
    }
};