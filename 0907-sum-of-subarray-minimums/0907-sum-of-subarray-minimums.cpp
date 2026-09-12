class Solution {
public:
    vector<int> psee(vector<int>& arr) {
        vector<int> pse(arr.size());
        stack<int> st;

        for (int i = 0; i < arr.size(); i++) {
            while (!st.empty() && arr[st.top()] > arr[i])
                st.pop();

            if (st.empty())
                pse[i] = -1;
            else
                pse[i] = st.top();

            st.push(i);
        }

        return pse;
    }

    vector<int> nsee(vector<int>& arr) {
        vector<int> nse(arr.size());
        stack<int> st;

        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            if (st.empty())
                nse[i] = arr.size();
            else
                nse[i] = st.top();

            st.push(i);
        }

        return nse;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> ns = nsee(arr);
        vector<int> ps = psee(arr);

        long long total = 0;
        long long mod = (long long)(1e9 + 7);

        for (int i = 0; i < arr.size(); i++) {
            int left = i - ps[i];
            int right = ns[i] - i;

            total = (total + (right * left * 1LL * arr[i]) % mod) % mod;
        }

        return total;
    }
};