class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0;
        int l=0;
        int r=0;
        while(r<nums.size()-1){
            int far=0;
            for(int i=l;i<=r;i++){
                far=max(i+nums[i],far);
            }
            l=r+1;
            r=far;
            jump=jump+1;
        }

        return jump;
    }
};