class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int i=0;
    int j=0;
    while(j<nums.size()&&i<nums.size()){
        if(nums[j]!=val){
            nums[i]=nums[j];
            j++;
            i++;
        }else{
            j++;
        }
     }  
     return i; 
    }
};