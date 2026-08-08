class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if(nums.size()==0)return 0;
        int lon=1;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]];
        }
        for(auto it:mpp){
            if(mpp.find(it.first-1)==mpp.end()){
                int cnt=1;
                int x=it.first;
                while(mpp.find(x+1)!=mpp.end()){
                    cnt++;
                    x++;
                }
                lon=max(lon,cnt);
            }
        }
        return  lon;
    }
};