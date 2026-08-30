class Solution {
public:
    int findMin(vector<int>& nums) {
     if(nums[0]<nums[nums.size()-1])return nums[0];
     if(nums.size()==1)return nums[0];
     int mid;
     int st=0;
     int end=nums.size()-1;
     while(st<end){
        mid=st+(end-st)/2;
        if(nums[mid]>nums[end])st=mid+1;
        else if(nums[mid]<nums[end])end=mid;
        else end--;
     }
return nums[st];
    }
};