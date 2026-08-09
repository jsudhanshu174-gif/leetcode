class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int ans=0;
        int gap;
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return 0;
        }
    
        for(int i=0;i<nums.size()-1;i++ ){
            gap=abs(nums[i]-nums[i+1]);
            ans=max(ans,gap);
         
        }
        return ans;
    }
};