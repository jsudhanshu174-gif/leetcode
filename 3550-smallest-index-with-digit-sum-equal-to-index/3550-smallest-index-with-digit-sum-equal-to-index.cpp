class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int Min=INT_MAX;
        for(int i=0;i<nums.size();i++){
           string s=to_string(nums[i]);
            int num=0;
            for(int j=0;j<s.size();j++){
                num=num+s[j]-'0';
            }
            if(num==i){
                Min=min(Min,num);
            }
        }
        if(Min!=INT_MAX) return Min;

        return -1;
    }
};