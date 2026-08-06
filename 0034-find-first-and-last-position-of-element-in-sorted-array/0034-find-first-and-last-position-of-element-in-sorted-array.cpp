class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int q=-1, t=-1;
        int st=0;
        int end=nums.size()-1;
        while(st<=end){
         int mid=st+(end-st)/2;
         if(target==nums[mid]){
            q=mid;
            end=mid-1;
         }
         else if(target<nums[mid]) end=mid-1;
         else st=mid+1;

        }
        int st1=0;
        int end1=nums.size()-1;
        while(st1<=end1){
         int mid=st1+(end1-st1)/2;
         if(target==nums[mid]){
            t=mid;
            st1=mid+1;
         }
         else if(target<nums[mid]) end1=mid-1;
         else st1=mid+1;

        }
        ans.push_back(q);
         ans.push_back(t);
         return ans;
        
        }
    
    };