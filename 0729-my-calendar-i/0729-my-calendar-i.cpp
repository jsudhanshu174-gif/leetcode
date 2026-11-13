class MyCalendar {
public:
    vector<vector<int>> ans;
    MyCalendar() {}

    bool book(int startTime, int endTime) {

        for (int i = 0; i < ans.size(); i++) {
            if (startTime < ans[i][1] && endTime > ans[i][0]) {
                return false;
            }
        }

        ans.push_back({startTime, endTime});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(startTime,endTime);
 */