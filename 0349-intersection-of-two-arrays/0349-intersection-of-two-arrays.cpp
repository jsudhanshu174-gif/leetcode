class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      vector<int>ans;
      unordered_map<int,int>mpp;
       unordered_map<int,int>mpp1;
      for(int i=0;i<nums1.size();i++){
        mpp[nums1[i]]++;
      }
       for(int i=0;i<nums2.size();i++){
        mpp1[nums2[i]]++;
      }
      for(auto it:mpp){
        if(mpp1.find(it.first)!=mpp1.end()){
            ans.push_back(it.first);
        }
      }
        return ans;
    }
};