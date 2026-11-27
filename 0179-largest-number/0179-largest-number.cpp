class Solution {
public:
    static bool campare(int a ,int b){
        return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
    string largestNumber(vector<int>& nums) {
        string ans="";
        //sort(nums.begin(),nums.end(),campare);
        sort(nums.begin(), nums.end(), campare);
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            ans+=s;
        }
        if(ans[0]=='0')return "0";
        return ans;
    }
};