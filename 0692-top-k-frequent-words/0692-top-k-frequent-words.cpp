class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mpp;
        for (int i = 0; i < words.size(); i++) {
            mpp[words[i]]++;
        }
        vector<string> ans;
        vector<string> arr;
        for (auto it : mpp) {
                arr.push_back(it.first);
            }
        sort(arr.begin(), arr.end(), [&](string a, string b) {
            if (mpp[a] != mpp[b])
                return mpp[a] > mpp[b];
            return a < b;
        });
        int cnt = 0;
        for (auto it : arr) {
            cnt++;
            if (cnt <= k) {
                ans.push_back(it);
            } else
                break;
        }
        return ans;
    }
};