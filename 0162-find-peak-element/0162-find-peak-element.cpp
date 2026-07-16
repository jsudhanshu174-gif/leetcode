class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int st=0;
        int end= nums.size()-1;
        if(end==0) return 0;
        if(end==1){
           if (nums[0]>nums[1])return 0;
           return 1;
        }
       if(nums[end]>nums[end-1]) return end;
         if(nums[st]>nums[st+1]) return st;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid-1]<nums[mid]){
                st=mid+1;
            }else{
                end=mid;
              
            }
        }
        return -1;
    }
};   
    