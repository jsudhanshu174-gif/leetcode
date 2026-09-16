 class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        list<int> st;

        for (int i = 0; i < as.size(); i++) {

            if (as[i] > 0) {
                st.push_back(as[i]);
            }
            else {
                while (!st.empty() && st.back() > 0 &&
                       st.back() < abs(as[i])) {
                    st.pop_back();
                }


                if (!st.empty() && st.back() == abs(as[i])) {
                    st.pop_back();
                }

                else if (st.empty() || st.back() < 0) {
                    st.push_back(as[i]);
                }
            }
        }

        vector<int> ans(st.begin(), st.end());
        return ans;
    }
};