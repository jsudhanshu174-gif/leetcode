class Solution {
public:
    int reverse (int num){
        int ans=0;
        while(num>0){
            ans=(ans*10)+num%10;
            num=num/10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n= nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(reverse(nums[i]));
        }
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp[nums[i]]<1) mpp[nums[i]]++;
        }
        int cnt=0;
        for(auto it:mpp){
            cnt++;
        }
        return cnt;
    }
};