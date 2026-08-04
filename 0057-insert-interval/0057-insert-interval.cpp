class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newintervals) {
        vector<vector<int>> ans;
        int i = 0;
        while (i < intervals.size()&&intervals[i][1] < newintervals[0]) {
            ans.push_back(intervals[i]);
            i++;
        }
        while (i < intervals.size() && intervals[i][0] <= newintervals[1]) {
            newintervals[0] = min(newintervals[0], intervals[i][0]);
            newintervals[1] = max(newintervals[1], intervals[i][1]);
            i = i + 1;
        }
        ans.push_back(newintervals);

        while (i < intervals.size()) {
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};